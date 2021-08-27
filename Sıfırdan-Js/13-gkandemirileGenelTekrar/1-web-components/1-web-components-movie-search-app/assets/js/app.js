// let movies = [{
//     title: "The Man From Earth 1",
//     description: `John üniversiteden ayrılıp, başka bir yere gitmeye karar vermiş, akademisyen arkadaşları da ona veda etmek için evine gelmişlerdir. Arkadaşları John'u kalması için ikna etmeye çalışırken, John büyük sırrını ortaya dökecek ve herkesi büyük bir şaşkınlığa sürükleyecekti`,
//     poster: "https://unutulmazfilmler.pw/wp-content/uploads/2016/07/The-Man-from-Earth.jpg",
//     isFavourite: true
//   },
//   {
//     title: "The Man From Earth 2",
//     description: `John üniversiteden ayrılıp, başka bir yere gitmeye karar vermiş, akademisyen arkadaşları da ona veda etmek için evine gelmişlerdir. Arkadaşları John'u kalması için ikna etmeye çalışırken, John büyük sırrını ortaya dökecek ve herkesi büyük bir şaşkınlığa sürükleyecekti`,
//     poster: "https://unutulmazfilmler.pw/wp-content/uploads/2016/07/The-Man-from-Earth.jpg",
//     isFavourite: false
//   },
//   {
//     title: "The Man From Earth 3",
//     description: `John üniversiteden ayrılıp, başka bir yere gitmeye karar vermiş, akademisyen arkadaşları da ona veda etmek için evine gelmişlerdir. Arkadaşları John'u kalması için ikna etmeye çalışırken, John büyük sırrını ortaya dökecek ve herkesi büyük bir şaşkınlığa sürükleyecekti`,
//     poster: "https://unutulmazfilmler.pw/wp-content/uploads/2016/07/The-Man-from-Earth.jpg",
//     isFavourite: true
//   }
// ];
//!ödev

// const search_text= document.querySelector("#app").getAttribute("searchText")
// if (search_text=="none") {
  
// }else{
//   searchMovie()
// }

// //sorgu atalım
// async function searchMovie() {
//   const request = await fetch(`https://www.omdbapi.com/?i=tt3896198&apikey=7e2dbe5c&s=${search_text.value}`)
//   const data = await request.json()
//   let movies = await data.Search.map(m => {
//     return {
//       title: m.Title,
//       description: `Açıklama: <br> ${m.Year}/${m.Type}`,
//       imdbID: m.imdbID,
//       poster: m.Poster ==='N/A' ? 'assets/images/default.png': m.Poster,
//       isFavourite:false
//     }
//   })
//   console.log('movies :>> ', movies);
//   prepareMovies(movies)
// }
//!ödev end
const search_text = document.querySelector(".search_text")
search_text.addEventListener("keydown", (e) => {
  if (e.keyCode == 13) {
    searchMovie()
  }
})
//sorgu atalım
async function searchMovie() {
  const request = await fetch(`https://www.omdbapi.com/?i=tt3896198&apikey=7e2dbe5c&s=${search_text.value}`)
  const data = await request.json()
  let movies = await data.Search.map(m => {
    return {
      title: m.Title,
      description: `Açıklama: <br> ${m.Year}/${m.Type}`,
      imdbID: m.imdbID,
      poster: m.Poster ==='N/A' ? 'assets/images/default.png': m.Poster,
      isFavourite:false
    }
  })
  console.log('movies :>> ', movies);
  prepareMovies(movies)
}
//filmleri hazırla
function prepareMovies(movies) {
  while (document.querySelector("#movies").firstChild) {
    document.querySelector("#movies").removeChild(document.querySelector("#movies").firstChild)
  }
  movies.forEach(movie => {
    let movie_card = document.createElement("movie-card")
    movie_card.setAttribute("title", movie.title)
    movie_card.setAttribute("poster", movie.poster)
    movie_card.setAttribute("isFavourite", movie.isFavourite)
    movie_card.setAttribute("imdbID", movie.imdbID)
    movie_card.innerHTML = movie.description
    document.querySelector("#movies").append(movie_card)

  });
}