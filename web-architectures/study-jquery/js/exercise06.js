$("document").ready(() => {
  $("#movies tbody tr").each(function () {
    let genres = $(this).find("td:eq(3)").text().split(", ")
    if (!(genres.includes("Drama") && genres.includes("Comedy"))) {
      $(this).hide()
    }
  })
})
