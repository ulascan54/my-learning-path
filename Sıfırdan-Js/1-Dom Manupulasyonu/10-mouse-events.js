const cardBody = document.querySelectorAll(".card-body")[1];
const title=document.querySelector("#tasks-title")

//*click event
// title.addEventListener("click",run)
//*double click
// title.addEventListener("dblclick",run)
//*Mause Down
// title.addEventListener("mousedown",run)
//*Mause Up
// title.addEventListener("mouseup",run)
//*mouse over
// title.addEventListener("mouseover",run)
//*mouse out
// title.addEventListener("mouseout",run)

// cardBody.addEventListener("mouseover",run)
// cardBody.addEventListener("mouseout",run)

//*mouse enter ve mouse leave
// cardBody.addEventListener("mouseenter",run)
// cardBody.addEventListener("mouseleave",run)

function run(e){
  console.log(e.type)
}