//* Call Apply Bind
const obj1={
  number1:10,
  number2:20,
}
const obj2={
  number1:30,
  number2:40,
}
function addNumbers(number3,number4){
  console.log(this.number1+this.number2+number3+number4)
}
// addNumbers(100,200)
// addNumbers.call(obj1,100,200)//* call metod
// addNumbers.call(obj2,100,200)

// addNumbers.apply(obj1,[100,200])//*apply metod array gibi verilmeli
// addNumbers.apply(obj2,[100,200])

//*Bind-kopya fonksiyon üretir - kullanım yeri:eventler
function getNumbersTotal(number3,number4){
  return this.number1+this.number2+number3+number4
}
//!this anahtar yeri karışırsa bind hayat kurtarır!!
//! call ile apply kopya fonksiyon üretmez ama bind üretir

const copyFunc1=getNumbersTotal.bind(obj1)
const copyFunc2=getNumbersTotal.bind(obj2)
console.log(copyFunc1(100,200))
console.log(copyFunc2(100,200))

// console.dir(copyFunc1)
// console.dir(copyFunc2)
