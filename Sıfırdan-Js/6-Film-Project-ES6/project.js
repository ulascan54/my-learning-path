const form = document.getElementById("film-form")
const titleElement = document.getElementById("title")
const directorElement = document.getElementById("director")
const urlElement = document.getElementById("url")
const cardBody = document.querySelectorAll(".card-body")[1]
const clearButton = document.querySelector("#clear-films")



//*Tüm eventleri yükleme

eventListeners()

function eventListeners() {
  form.addEventListener("submit", addFilm)
  //* sayfa yüklendiğinde film eklme
  document.addEventListener("DOMContentLoaded", function () {
    let films = Storage.getFilmsFromStorage()
    UI.loadAllFilms(films)
  })
  //* silme işlemi
  cardBody.addEventListener("click", deleteFilm)
  clearButton.addEventListener("click", clearAllFilms)
}

//* tümünü silme işlemi
function clearAllFilms() {
UI.clearAllFilmsFromUI()
}

//* silme işlemi
function deleteFilm(event) {
  if (event.target.id === "delete-film") {
    UI.deleteFilmFromUI(event.target)
    Storage.deleteFilmFromStorage(event.target)
    UI.displayMessages("Silindi...", "warning")
  }
}

function addFilm(event) {
  const title = titleElement.value
  const director = directorElement.value
  const url = urlElement.value
  if (title === "" || director === "" || url === "") {
    //* hata mesajı
    UI.displayMessages("Tüm alanları doldurun...", "danger")
  } else {
    //* yeni film
    const newFilm = new Film(title, director, url)
    UI.addFilmToUI(newFilm) //* arayüze film ekleme
    Storage.addFilmToStorage(newFilm) //*storage film ekleme
    UI.displayMessages("Film başarıyla eklendi", "success")
  }
  UI.clearInputs(titleElement, urlElement, directorElement)
  event.preventDefault()
}