$("document").ready(() => {
  $("#movies tbody > tr").css("border", "2px solid black")
  $("#movies tbody > tr:odd").css("background-color", "blue")
  $("#movies tbody > tr:even").css("background-color", "red")
  $(".panel-heading").css("border", "4px solid green")
})
