const form = document.getElementById("film-form")
const filmNameInput = document.getElementById("title")
const filmDirectorInput = document.getElementById("director")
const filmLinkInput = document.getElementById("url")
const cardbody = document.querySelectorAll(".card-body")[1]
const clearFilms = document.querySelector("#clear-films")
eventLisiners()

//! events
function eventLisiners() {
  form.addEventListener("submit", addFilm)
  document.addEventListener("DOMContentLoaded", function () {
    let films = Storage.getFilmsFromStorage()
    UI.loadAllFilms(films)
  })
  cardbody.addEventListener("click", deleteItem)
  clearFilms.addEventListener("click", clearAllFilms)
}
//*Film Ekleme
function addFilm(event) {
  const filmName = filmNameInput.value.trim()
  const filmDirector = filmDirectorInput.value.trim()
  const filmLink = filmLinkInput.value.trim()
  if (filmName == "" || filmDirector == "" || filmLink == "") {
    UI.showAlert("Lütfen tüm alanları doldurunuz...!", "danger")
  } else {
    const newFilm = new Film(filmName, filmDirector, filmLink)
    UI.addFilmToUI(newFilm)
    Storage.addFilmToStorage(newFilm)
    UI.showAlert("Lütfen tüm alanları doldurunuz...!", "success")
  }
  UI.clearInputs(filmNameInput, filmDirectorInput, filmLinkInput)
  event.preventDefault()
}

function deleteItem(event) {
  if (event.target.id == "delete-film") {
    UI.deleteItemFromUI(event.target)
    Storage.deleteItemFromStorage(event.target)
    UI.showAlert("Film silindi...!", "success")
  }
}

function clearAllFilms() {
  if (confirm("Eminmisiniz?")) {
    const filmList = document.getElementById("films")
    if (filmList.lastChild === null) {
      UI.showAlert("Zaten hiç eleman yok...!", "warning")

    } else {
      UI.clearAllFilmsFromUI()
      Storage.clearAllFilmsFromStorage()
      UI.showAlert("Tüm Filmler silindi...!", "success")
    }
  }

}