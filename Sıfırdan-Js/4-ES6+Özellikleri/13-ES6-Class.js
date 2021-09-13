//* Syntactic Sugar = sadece yazımı güzel ecmascript 6
// function  Employee(name,age,salary) {
//   this.name=name
//   this.age=age
//   this.salary=salary
// }
// Employee.prototype.showInfos=function () {
//   console.log("isim:" + this.name+" yaş: "+this.age+" maaş"+this.salary)
// }
// const emp=new Employee("Mustafa",25,4000)
// console.log(emp)

class Employee {
  constructor(name, age, salary) {//*constructor
    this.name = name
    this.age = age
    this.salary = salary
  }
  showInfos(){
    console.log("isim:" + this.name+" yaş: "+this.age+" maaş"+this.salary)
  }
}

const emp=new Employee("Mustafa",25,4000)
console.log(emp)
emp.showInfos()