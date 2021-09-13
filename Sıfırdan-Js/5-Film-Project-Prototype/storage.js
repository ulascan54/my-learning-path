function Storage() {

}
Storage.prototype.addFilmToStorage = function (newFilm) {
  let films = this.getFilmsFromStorage()
  films.push(newFilm)
  localStorage.setItem("films", JSON.stringify(films))
}

Storage.prototype.getFilmsFromStorage = function () {
  let films;
  if (localStorage.getItem("films") === null) {
    films = []
  } else {
    films = JSON.parse(localStorage.getItem("films"))
  }
  return films
}
//*depodan silme
Storage.prototype.deleteFilmFromStorage=function(element){
  let films = this.getFilmsFromStorage()
  let filmTitle=element.parentElement.previousElementSibling.previousElementSibling.textContent
  console.log(filmTitle)
  films.forEach(function (film,index) {
    if (film.title === filmTitle) {
      films.splice(index, 1) //*arrayden gelen değeri silebilirsiniz
    }

  })
  localStorage.setItem("films", JSON.stringify(films))
}

Storage.prototype.clearAllFilmsFromStorage=function(){
  localStorage.removeItem("films")
}