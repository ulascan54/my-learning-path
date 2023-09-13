var histogram = {}
var badges = {}

function createBadge(genre) {
  if (badges.hasOwnProperty(genre)) {
    return badges[genre]
  }
  badge =
    '<li role="presentation" class="active">' +
    genre +
    '<span class="badge">' +
    histogram[genre] +
    "</span></a></li>"
  badges[genre] = badge
  return badge
}

function extractGenreColumn(tr) {
  return $("td:eq(3)", $(tr))
}

function extractGenres(td) {
  return td.text().trim().replace(/\s+/g, "").split(",")
}

function computeHistogram() {
  td = extractGenreColumn(this)
  $.each(extractGenres(td), function (index, genre) {
    if (!histogram.hasOwnProperty(genre)) {
      histogram[genre] = 0
    }
    histogram[genre] = histogram[genre] + 1
  })
}

function badgeHistogram() {
  td = extractGenreColumn(this)
  genres = extractGenres(td)
  td.empty()
  ul = $('<ul class="nav nav-pills" role="tablist">').appendTo(td)
  $.each(genres, function (index, genre) {
    ul.append(createBadge(genre))
  })
  $(this).append("</ul>")
}

$(document).ready(function () {
  $("#movies tbody tr").each(computeHistogram)
  $("#movies tbody tr").each(badgeHistogram)
})
