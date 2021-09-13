function Employee(name,age) {
  this.name=name
  this.age=age
}
Employee.prototype.showInfos=function(){console.log(`isim: ${this.name} Yaş: ${this.age}`)}
const emp1= new Employee("Mustafa",25)
const emp2= new Employee("Oğuz",25)

console.log(emp1)
console.log(emp2)
emp1.showInfos()
emp2.showInfos()