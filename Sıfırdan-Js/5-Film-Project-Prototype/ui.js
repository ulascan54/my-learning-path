function UI() {

}
UI.prototype.addFilmToUI = function (newFilm) {
  const filmList = document.getElementById("films")
  filmList.innerHTML += `
  <tr>
      <td><img src="${newFilm.url}" class="img-fluid img-thumbnail"></td>
      <td>${newFilm.title}</td>
      <td>${newFilm.director}</td>
       <td><a href="#" id="delete-film" class="btn btn-danger">Filmi Sil</a></td>
      </tr> 
  `
}
//* inputların içini boşaltır
UI.prototype.clearInputs = function (element1, element2, element3) {
  element1.value = ""
  element2.value = ""
  element3.value = ""
}
//* alert 
UI.prototype.displayMessages = function (message, type) {
  const showAlert = document.getElementsByClassName("container")[0]
  if (showAlert.lastChild.className != `alert alert-${type}`) {
    const Alert = document.createElement("div")
    Alert.className = `container  fixed-top alert alert-${type}`
    Alert.setAttribute("role", "alert")
    Alert.setAttribute("style", "max-width:350px; top:10px")
    Alert.innerHTML = `<i class="fa fa-exclamation-triangle"></i> ${message}`
    showAlert.appendChild(Alert)
    setTimeout(function () {
      Alert.remove()
    }, 1000)
  }
}
//*sayfa yüklendiğinde storageden bilgi çekme
UI.prototype.loadAllFilms = function (films) {
  const filmList = document.getElementById("films")
  films.forEach(function (film) {
    filmList.innerHTML += `
    <tr>
        <td><img src="${film.url}" class="img-fluid img-thumbnail"></td>
        <td>${film.title}</td>
        <td>${film.director}</td>
         <td><a href="#" id="delete-film" class="btn btn-danger">Filmi Sil</a></td>
        </tr> 
    `
  })
}
//*Sayfadan film kaldırma
UI.prototype.deleteFilmFromUI = function (element) {
  element.parentElement.parentElement.remove()
}
//* tüm duları silme
UI.prototype.clearAllFilmsFromUI = function () {
  const filmList = document.getElementById("films")
  if (filmList.firstElementChild != null) {
    const showConfirmClear = document.getElementsByClassName("container")[0]
    const confirmClear = document.createElement("div")
    confirmClear.className = "container card text-white fixed-top bg-secondary mb-3"
    confirmClear.setAttribute("style", "max-width: 18rem; top:10px")
    confirmClear.id = "confirmClear"
    confirmClear.innerHTML = `
      <div class="card-header">Güvenlik Sorusu</div>
        <div class="card-body">
           <h5 class="card-title">Eminmisiniz ?</h5>
           <button type="button" class="btn btn-success" id="confirmYes">Evet</button>
           <button type="button" class="btn btn-danger" id="confirmNo">Hayır</button>
       </div>`
    showConfirmClear.appendChild(confirmClear)
    const confirmYes = document.getElementById("confirmYes")
    const confirmNo = document.getElementById("confirmNo")


    confirmYes.addEventListener("click", function () {
      const filmList = document.getElementById("films")
      while (filmList.firstElementChild != null) {
        filmList.removeChild(filmList.firstElementChild)
      }
      document.getElementById("confirmClear").remove()
      ui.displayMessages("Tüm hepsi silindi...", "success")
      storage.clearAllFilmsFromStorage()
    })
    confirmNo.addEventListener("click", function () {
      document.getElementById("confirmClear").remove()
    })
  }
  else {
    ui.displayMessages("Zaten hiç film yok", "danger")
  }
}