class Storage {
  static addFilmToStorage(newFilm) {
    let films = this.getFilmsFromStorage()
    films.push(newFilm)
    localStorage.setItem("films", JSON.stringify(films))
  }
  static getFilmsFromStorage() {
    let films
    if (localStorage.getItem("films") === null) {
      films = []
    } else {
      films = JSON.parse(localStorage.getItem("films"))
    }
    return films
  }
  static deleteItemFromStorage(element) {
    let films = this.getFilmsFromStorage()
    let filmname = element.parentElement.previousElementSibling.previousElementSibling.textContent
    films.forEach(function (film, index) {
      if (filmname === film.name) {
        films.splice(index, 1)
      }
    })
    localStorage.setItem("films",JSON.stringify(films))
  }
  static clearAllFilmsFromStorage(){
    localStorage.removeItem("films")
  }
}