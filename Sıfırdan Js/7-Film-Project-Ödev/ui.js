class UI {
  static addFilmToUI(newFilm) {
    const filmList = document.getElementById("films")
    filmList.innerHTML += `
    <tr>
        <td><img src="${newFilm.link}" class="img-fluid img-thumbnail"></td>
        <td>${newFilm.name}</td>
        <td>${newFilm.director}</td>
        <td><a href="#" id="delete-film" class="btn btn-danger">Filmi Sil</a></td>
    </tr>
    `
  }
  static clearInputs(name,director,link){
    name.value=""
    director.value=""
    link.value=""
  }
  static showAlert(msj,type){
    let element=document.getElementsByClassName("container")[0]
    let alert=document.createElement("div")
    alert.innerHTML=`
      <div class="alert fixed-top container alert-${type}" role="alert">
      ${msj}
      </div>
    `
    element.appendChild(alert)
    setTimeout(function(){
      alert.remove()
    },1000)
  }
  static loadAllFilms(films){
    const filmList = document.getElementById("films")
    films.forEach(function(film){
      filmList.innerHTML += `
      <tr>
          <td><img src="${film.link}" class="img-fluid img-thumbnail"></td>
          <td>${film.name}</td>
          <td>${film.director}</td>
          <td><a href="#" id="delete-film" class="btn btn-danger">Filmi Sil</a></td>
      </tr>
      `

    });
  }
  static deleteItemFromUI(element){
    element.parentElement.parentElement.remove()
  }
  static clearAllFilmsFromUI(){
    const filmList = document.getElementById("films")

    while (filmList.lastChild!=null) {
      filmList.lastChild.remove()
    }
  }
} 