//* Kalıtım - Inheritance
// function Person(name,age) {//*Constructor
//   this.name=name
//   this.age=age
// }
// Person.prototype.showInfos=function(){
//   console.log("isim: "+this.name+" Yaş: "+this.age)
// }
// function Employee(name,age,salary){
//   Person.call(this,name,age)
//   this.salary=salary
// }
// Employee.prototype=Object.create(Person.prototype)
// Employee.prototype.toString=function(){
//   console.log("Employee")
// }
// Employee.prototype.showInfos=function(){//*Overriding -iptal etme 
//   console.log("isim: "+this.name+" Yaş: "+this.age+" Maaş :"+this.salary)
// }
// const emp=new Employee("Mustafa",25,4000)

//* ECMASCRIPT 6
class Person {//* Superclass, BaseClass
  constructor(name, age) {
    this.name = name
    this.age = age
  }
  showInfos() {//* Overriding
    console.log("isim: " + this.name + " Yaş: " + this.age)
  }
  toString(){//* Overriding
    console.log("Employee")
  }
  raiseSalary(amount){//* Ekstra
    this.salary+= amount
  }
}
class Employee extends Person { //* Inheritance- Derived Class,Subclass,ChildClass
  constructor(name, age, salary) {
    // this.name = name
    // this.age = age
    super(name,age)
    this.salary=salary
  }
  showInfos() {
    console.log("isim: "+this.name+" Yaş: "+this.age+" Maaş :"+this.salary)
  }
}

const emp=new Employee("Mustafa",25,40000)
emp.raiseSalary(500)
console.log(emp)
emp.showInfos()
emp.toString()
