// const object = new Object()//* object literal
// const object2 = new Object()

// object.name="Mustafa"
// console.log(object)

function Employee(name,age) {
  this.name=name
  this.age=age
  this.showInfos=()=>console.log("Bilgiler Gösteriliyor...")
  this.toString=()=>console.log("Bu bir Employee objesidir")
}
const emp1= new Employee("Mustafa",25)
console.log(emp1)
console.log(emp1.toString())