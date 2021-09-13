let value
const todoList=document.querySelector(".list-group")
const todo=document.querySelector(".list-group-item:nth-child(2)")
const cardrow=document.querySelector(".card.row")

value=todoList
value=todo
value=cardrow

//*child nodes - text dahil
value=todoList.childNodes
value=todoList.childNodes[0]

//*children - element
value=todoList.children
value=todoList.children[todoList.children.length-1]
value=todoList.children[2].textContent="DEĞİŞTİ"


value=cardrow
value=cardrow.children
value=cardrow.children[2].children[1].textContent="burasıda değişti"

value=todoList
value=todoList.children[0]
value=todoList.lastElementChild
value=todoList.firstElementChild
value=todoList.children.length
value=todoList.childElementCount

//* parent element
value=cardrow.
value=cardrow.parentElement
value=cardrow.parentElement.parentElement

//*Element kardeşleri
value=todo
value=todo.previousElementSibling
value=todo.nextElementSibling
value=todo.nextElementSibling.nextElementSibling
value=todo.previousElementSibling.previousElementSibling


console.log(value)

