//replace

const cardbody=document.getElementsByClassName("card-body")[1]
const newBanner=document.createElement("h3")
newBanner.appendChild(document.createTextNode("Yeni Todolar"))
newBanner.className="card-title"
newBanner.id="tasks-title"

const oldBanner=document.querySelector("#tasks-title")
cardbody.replaceChild(newBanner,oldBanner)
console.log(cardbody)

// let value=cardbody.replaceChild()

// console.log(cardbody.replaceChild(newBanner,cardbody.children[1]))