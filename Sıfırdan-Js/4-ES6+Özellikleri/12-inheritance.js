//* Kalıtım - Inheritance
function Person(name,age) {//*Constructor
  this.name=name
  this.age=age
}
Person.prototype.showInfos=function(){
  console.log("isim: "+this.name+" Yaş: "+this.age)
}
// const person=new Person("Mustafa",25)
// console.log(person)
function Employee(name,age,salary){
  // this.name=name
  Person.call(this,name,age)
  // this.age=age
  this.salary=salary
}
Employee.prototype=Object.create(Person.prototype)
Employee.prototype.toString=function(){
  return "employee"
}
Employee.prototype.showInfos=function(){//*Overriding -iptal etme 
  console.log("isim: "+this.name+" Yaş: "+this.age+" Maaş :"+this.salary)
}
const emp=new Employee("Mustafa",25,4000)
// console.log(emp)
// emp.showInfos()
// console.log(emp.toString())
console.log(emp)
