colorIndex = 0

colors = [
  "Khaki",
  "LightSlateGray",
  "Blue",
  "BlueViolet",
  "Brown",
  "CadetBlue",
  "Chocolate",
  "Crimson",
  "DarkBlue",
  "DarkGoldenRod",
  "DarkMagenta",
  "DarkOrange",
  "DeepSkyBlue",
  "Gold",
  "Green",
  "Maroon",
  "MediumAquaMarine",
  "Moccasin",
  "Navy",
  "OliveDrab",
  "PaleVioletRed",
]

function getNextColor() {
  return colors[colorIndex++]
}

var colorMap = {}

function getColor(genre) {
  if (!colorMap.hasOwnProperty(genre)) colorMap[genre] = getNextColor()
  return colorMap[genre]
}

$(document).ready(function () {
  $("#movies tbody tr").each(function () {
    td = $("td:eq(3)", $(this))
    genres = td.text().trim().replace(/\s+/g, "").split(",")
    td.text("")
    $.each(genres, function (index, genre) {
      td.append(
        '<span class="label" style="background-color: ' +
          getColor(genre) +
          ';">' +
          genre +
          "</span>"
      )
    })
  })
})
