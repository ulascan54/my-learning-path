$(document).ready(function () {
  let columns = {
    No: 0,
    Title: 1,
    Directors: 2,
    Genres: 3,
    Year: 4,
  }

  function createCheckbox(column) {
    return `
    <div class="checkbox-inline">
        <label>
            <input id="${column}" type="checkbox" checked />
            ${column}
        </label>
    </div>
    `
  }
  for (let column in columns) {
    $("#movies").before(createCheckbox(column))
    $("#" + column).click(function () {
      let index = columns[column]
      if (this.checked) {
        $("#movies thead th:eq(" + index + ")").show()
        $("#movies tbody td:nth-child(5n+" + (index + 1) + ")").show()
      } else {
        $("#movies thead th:eq(" + index + ")").hide()
        $("#movies tbody td:nth-child(5n+" + (index + 1) + ")").hide()
      }
    })
  }
})
