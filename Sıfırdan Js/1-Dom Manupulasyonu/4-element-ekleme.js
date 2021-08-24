//*yeni elemen oluşturma 
// <a id = "clear-todos" class="btn btn-dark" href="#">Tüm Taskları Temizleyin</a>               

const newLink=document.createElement("a")
const cardbody=document.getElementsByClassName("card-body")[1]

newLink.id = "clear-todos"
newLink.className = "btn btn-danger"
newLink.href="https://www.google.com.tr"
newLink.target="_blank"

//*text content-- güvenli değil!
// newLink.textContent="farklı sayfaya git"
// cardbody.textContent="farklı sayfaya git"
//*text node
// const text=document.createTextNode("Naber")
// cardbody.appendChild(text)


newLink.appendChild(document.createTextNode("Farklı Bir Sayfaya Git!"))
cardbody.appendChild(newLink)

console.log(newLink)


// let value

// const cardbody=document.querySelectorAll(".card-body")
// value = cardbody[1]
// console.log(value)