//* OBJECT CREATE METOD

// const obj={
//   test:function(){
//     console.log("test1")
//   },
//   test2:function(){
//     console.log("test2")
//   }
// }
// console.log(obj)
// const emp= Object.create(obj)
// emp.name="mustafa"
// emp.age=25
// console.log(emp)
// emp.test()

function Person() {

}
Person.prototype.test1 = function () {
  console.log("test1")
}

Person.prototype.test2 = function () {
  console.log("test2")
}
// const person=new Person()
// console.log(person)
function Employee(name, age) {
  this.name = name
  this.age = age
}

Employee.prototype = Object.create(Person.prototype)
Employee.prototype.myTest = function () {
  console.log("My test")
}
const emp = new Employee("Mustafa", 25)
console.log(emp)
emp.test1()