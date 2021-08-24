//* local storage

//*set Item
// localStorage.setItem("hareket","burpee")
// localStorage.setItem("tekrar","50")

//*get item
// const value=localStorage.getItem("tekrar")
// console.log(value)
// console.log(typeof value)

//*clear local storage
// localStorage.clear()

// localStorage.setItem("hareket","burpee")
// localStorage.setItem("tekrar","50")
// console.log(localStorage.getItem("sport"))
// if (localStorage.getItem("hareket")===null) {
//   console.log("sorgladığınız veri bulunmuyor")
// }
// else
// console.log("sorgladığınız veri bulunuyor")

// !Local storage - Array Yazma
// const todos = ["todo 1", "todo 2", "todo 3"]
// localStorage.setItem("todos",todos)
// console.log(localStorage.getItem("todos"))
// console.log(typeof localStorage.getItem("todos"))

// localStorage.setItem("todos", JSON.stringify(todos)) //? array yazma fonksiyonu

// const value = JSON.parse(localStorage.getItem("todos"))//?Array değişkene çekerken
// console.log(value)

//!uygulama
const form = document.getElementById("todo-form")
const todoInput = document.getElementById("todo")
form.addEventListener("submit", addTodo)

function addTodo(event) {
  const value=todoInput.value
  let todos;
  if (localStorage.getItem("todos")===null) {
    todos =[]
  }
  else{
    todos=JSON.parse(localStorage.getItem("todos"))
  }
  todos.push(value)
  localStorage.setItem("todos",JSON.stringify(todos))
  event.preventDefault()
}