//*Element Seçme İşlemleri:

const form = document.getElementById("todo-form")
const todoInput = document.getElementById("todo")
const todoList = document.querySelector(".list-group")
const firstCardBody = document.querySelectorAll(".card-body")[0]
const secondCardBody = document.querySelectorAll(".card-body")[1]
const filter = document.querySelector("#filter")
const clearButton = document.querySelector("#clear-todos")

//? Tüm Event Listenerlar
eventListeners()

function eventListeners() {
  form.addEventListener("submit", addTodo)
  document.addEventListener("DOMContentLoaded", loadAllTodosToUI)
  secondCardBody.addEventListener("click", deleteTodo)
  filter.addEventListener("keyup",filterTodos)
  clearButton.addEventListener("click",clearAllTodos)
}

//* Todo Ekleme İşlemi
function addTodo(event) {
  const newTodo = todoInput.value.trim()
  let todos= getTodosFromStorage()
  if(todos.indexOf(newTodo)!=-1 ){
    showAlert("warning", "Lütfen farkı bir todo girin!")
    todoInput.value = "";
  }
  else if (newTodo === "") {
    showAlert("danger", "Lütfen bir todo girin!")
    todoInput.value = "";
  } else {
    addTodoToUI(newTodo)
    addTodoToStorage(newTodo)
    showAlert("success", "Todo başarıyla eklendi!")
    todoInput.value = "";
  }
  event.preventDefault();

}
//* Alert
function showAlert(type, message) {
  const alert = document.createElement("div")
  alert.className = `container fixed-top alert alert-${type}`
  alert.textContent = message
  firstCardBody.appendChild(alert)
  //*setTimeout
  setTimeout(function () {
    alert.remove()
  }, 1000)
}

//* Depoya ekleme işlemi
function getTodosFromStorage() {
  let todos
  if (localStorage.getItem("todos") == null) {
    todos = []
  } else {
    todos = JSON.parse(localStorage.getItem("todos"))
  }
  return todos
}

function addTodoToStorage(newTodo) {
  let todos = getTodosFromStorage()
  todos.push(newTodo)
  localStorage.setItem("todos", JSON.stringify(todos))
}

//* Todo Ekleme İşlemi
function addTodoToUI(newTodo) { //?String değerini arayüze ekleyecek
  const listItem = document.createElement("li") //! list item oluşturma
  // const link = document.createElement("a") //* link oluşturma
  // link.href = "#" //* link oluşturma
  // link.className = "delete-item" //* link oluşturma
  // link.innerHTML = "<i class = 'fa fa-remove'></i>" //* link oluşturma
  listItem.className = "list-group-item d-flex justify-content-between" //! list item oluşturma
  // listItem.appendChild(document.createTextNode(newTodo)) //!Text Node Ekleme 
  listItem.innerHTML = `${newTodo}<a href = '#' class ='delete-item'><i class = 'fa fa-remove'></i></a>`
  // listItem.appendChild(link) //! list item oluşturma
  todoList.appendChild(listItem) //!Todo liste oluşturduğumuz list itemı ekleme
}

//*Sayfa yüklendiğinde todo ekleme
function loadAllTodosToUI() {
  let todos = getTodosFromStorage()
  todos.forEach(function (todo) {
    addTodoToUI(todo)
  });
}

//* todo silme işlemi
function deleteTodo(event) {
  if (event.target.className == "fa fa-remove") {
    event.target.parentElement.parentElement.remove()
    deleteTodoFromStorage(event.target.parentElement.parentElement.textContent)
    showAlert("success", "Todo başarıyla silindi!")
  }
  event.preventDefault()
}

//* todoları depodan silme
function deleteTodoFromStorage(deleteTodo) {
  let todos = getTodosFromStorage()
  todos.forEach(function (todo, index) {
    if (todo === deleteTodo) {
      todos.splice(index, 1) //*arrayden gelen değeri silebilirsiniz
    }

  })
  localStorage.setItem("todos", JSON.stringify(todos))
}

//* filtreleme
function filterTodos(event) {
  const filterValue=event.target.value.toLowerCase()
  const listItems =document.querySelectorAll(".list-group-item")
  listItems.forEach(function(listItem){
    const text=listItem.textContent.toLowerCase()
    if (text.indexOf(filterValue)===-1) {
      listItem.setAttribute("style","display:none !important")
    }
    else{
      listItem.setAttribute("style","display:block")
    }
  })
}
//* tüm todoları silme işlemi
function clearAllTodos(){
  if(confirm("Tümünü Silmek istediğinize emin misiniz?")){
  //*arayüzden todoları temizleme
    // todoList.innerHTML=""
    while(todoList.firstElementChild !=null){
    todoList.removeChild(todoList.firstElementChild)
    }
    localStorage.removeItem("todos");
  }
}