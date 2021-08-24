// console.log(this)//*Global Scopbe

// const emp1 = {//* object literal
//   name: "Mustafa",
//   age: 25,
//   showInfos: function () {
//     console.log("Bilgiler Gösteriliyor")
//   }
// }
// const emp2 = {
//   name: "ahmet",
//   age: 25
// }

// emp1.salary=4000
// emp1.showInfos()

// console.log(emp1)

//* yapıcı fonksiyon- Constructor
// function Employee(){
//   this.name="Mustafa"
// }
// const emp1=new Employee()
// const emp2=new Employee()

// console.log(emp1)
// console.log(emp2)

function Employee(name,age,salary){//* yapıcı fonksiyon
  this.name=name
  this.age=age
  this.salary=salary
  this.showInfos= ()=>console.log(this.name,this.age,this.salary)
  // console.log(this)
}
const emp1=new Employee("Mustafa","25","3000")
// const emp2=new Employee("Ahmet","25","5000")

// console.log(emp1)
// console.log(emp2)
emp1.showInfos()


