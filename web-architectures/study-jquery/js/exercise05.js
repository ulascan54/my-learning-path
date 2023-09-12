$("document").ready(() => {
  $("#movies tbody tr").each(function () {
    let directors = $(this).find("td:eq(2)").text().split(",")
    if (directors.length <= 1) {
      $(this).hide()
    }
  })
})
