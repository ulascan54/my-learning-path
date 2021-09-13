const form = document.getElementById("film-form")
const titleElement = document.getElementById("title")
const directorElement = document.getElementById("director")
const urlElement = document.getElementById("url")
const cardBody = document.querySelectorAll(".card-body")[1]
const clearButton = document.querySelector("#clear-films")


//* UI objesini başlatma
const ui = new UI()
//* Storage objesi üret
const storage = new Storage()
//*Tüm eventleri yükleme

eventListeners()

function eventListeners() {
  form.addEventListener("submit", addFilm)
  //* sayfa yüklendiğinde film eklme
  document.addEventListener("DOMContentLoaded", function () {
    let films = storage.getFilmsFromStorage()
    ui.loadAllFilms(films)
  })
  //* silme işlemi
  cardBody.addEventListener("click", deleteFilm)
  clearButton.addEventListener("click", clearAllFilms)
}

//* tümünü silme işlemi
function clearAllFilms() {
ui.clearAllFilmsFromUI()
}
//* silme işlemi
function deleteFilm(event) {
  if (event.target.id === "delete-film") {
    ui.deleteFilmFromUI(event.target)
    storage.deleteFilmFromStorage(event.target)
    ui.displayMessages("Silindi...", "warning")
  }
}

function addFilm(event) {
  const title = titleElement.value
  const director = directorElement.value
  const url = urlElement.value
  if (title === "" || director === "" || url === "") {
    //* hata mesajı
    ui.displayMessages("Tüm alanları doldurun...", "danger")
  } else {
    //* yeni film
    const newFilm = new Film(title, director, url)
    ui.addFilmToUI(newFilm) //* arayüze film ekleme
    storage.addFilmToStorage(newFilm) //*storage film ekleme
    ui.displayMessages("Film başarıyla eklendi", "success")

  }
  ui.clearInputs(titleElement, urlElement, directorElement)
  event.preventDefault()
}