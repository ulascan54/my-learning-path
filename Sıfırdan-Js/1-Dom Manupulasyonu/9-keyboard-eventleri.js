//*Klavye Eventleri


//!keypress - özel tuşlar hariç çalışır
// document.addEventListener("keypress",run)
// function run(event) {
//   // console.log(event.which)
//   console.log(event.key)
// }

//!keydown - herhangi bir tuşa basınca oluşur
// document.addEventListener("keydown",run)
// function run(event) {
//   // console.log(event.which)
//   console.log(event.key)
// }
//!keyup - tuştan elini çekince çalışır
// document.addEventListener("keyup",run)
// function run(event) {
//   // console.log(event.which)
//   console.log(event.key)
// }
//!uygulama 1

// const todotitle=document.getElementsByClassName("card-header")[0]
// const todoInput=document.getElementById("todo")

// todoInput.addEventListener("keyup",function(event){
//   todotitle.textContent=todoInput.value

// })

//!uygulama 2
const header =document.querySelector(".card-header")
const todoInput =document.querySelector("#todo")

todoInput.addEventListener("keyup",changeText)

function changeText(event){
  header.textContent=event.target.value
}