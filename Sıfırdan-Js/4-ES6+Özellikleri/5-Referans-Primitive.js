// let a="mustafa"
// let b="mustafa"
// if(a===b){
//   console.log("eşit")//* sonucu verir çünkü primitive
// }
// const person1 ={
//   name:"mustafa",
//   name:25
// }
// const person2 ={
//   name:"mustafa",
//   name:25
// }
// if(person1===person2){
//   console.log("eşit")//* sonucu vermez çünkü referans
// }

const cities= new Map()
cities.set("Ankara",5)
cities.set("İstanbul",15)
cities.set([1,2,3],"array")


console.log(cities.get("Ankara"))//* sonucu bulur
console.log(cities.get([1,2,3]))//* sonucu bulamaz

