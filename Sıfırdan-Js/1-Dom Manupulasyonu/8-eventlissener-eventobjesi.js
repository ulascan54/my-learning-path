const filterInput = document.getElementById("filter")
const todoform=document.getElementById("todo-form")
console.log(todoform)
todoform.addEventListener("submit",submitform)
function submitform(event){
  console.log("Submit eventi")

  event.preventDefault()// varsayılan eventleri yok etme
}

// filterInput.onfocus = function(){
//   console.log("Naber")
// }

// filterInput.addEventListener("focus",function(event){
//   console.log(event)
//   console.log(event.type)
//   console.log(event.target)
//   console.log(event.target.placeholder)
//   console.log(event.target.className)

//   console.log("Naber")
// })

  // console.log(filterInput)