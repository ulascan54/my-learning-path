//* element Id'e göre seçme
let element 
element= document.getElementById("todo-form")
element=document.getElementById("tasks-title")

//*element class'a göre seçme
element=document.getElementsByClassName("list-group-item")
element=document.getElementsByClassName("card-header")

//*Element Tag 'e göre seçme
element=document.getElementsByTagName("div")

//*Query Selector -css selector tek bir element döner

element=document.querySelector("#todo-form")
element=document.querySelector("#tasks-title")
element=document.querySelector(".list-group-item")

element=document.querySelector("li")
element=document.querySelector("div")

//*Query SelectorAll -css selector tüm elemanları seç

element=document.querySelectorAll(".list-group-item")//Node List

element.forEach(function(el){
  console.log(el)
})


console.log(element)