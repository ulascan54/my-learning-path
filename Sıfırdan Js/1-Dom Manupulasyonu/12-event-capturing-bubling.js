//!Evenet Bubbling

// document.querySelector(".container").addEventListener("click",function(){
//   console.log("Div Container")
// })
// document.querySelector(".card.row").addEventListener("click",function(){
//   console.log("Card Row")
// })
// document.querySelectorAll(".card-body")[1].addEventListener("click",function(){
//   console.log("Card Body")
// })

//!event capturing or delegation

const cardbody=document.querySelectorAll(".card-body")[1];
cardbody.addEventListener("click",run)
function run(e){
  let b=e.target
  if(e.target.className ==="fa fa-remove" ){
    e.target.parentElement.parentElement.remove()
  }

  console.log(e.target)
}