const person={
  name:"Mustafa Murat",
  age:25,
  salary:3000,
}
const langs=["Python","Java","C++","Php"]
const name="Mustafa"
//* for in object
// for(let prop in person){
//   console.log(prop,person[prop])
// }
//* for in array
// for(let index in langs){
//   console.log(index,langs[index])
// }
//* for in string
// for (const index in name) {
//   console.log(index,name[index])
// }

//* for of döngüsü
//*object
// for (const value of person) {
//   console.log("person")//* geznemiyoruz
// }
//*array
// for (const value of langs) {
//   console.log(value)
// }
//* string
for (const character of name) {
  console.log(character)
}