let number1,number2

let arr=[100,200,300,400]

// number1=arr[0]
// number2=arr[1]

//*Destructing
// [number1,number2]=[100,200,300,400]
// const [num1,num2]=arr


//*obje destructing

// const numbers={
//   a:10,
//   b:20,
//   c:30,
//   d:40,
//   e:50,
// }
// const {a,c,e}=numbers
// const {a:num1,c:num2,e:num3}=numbers

//*function destructing

// const getLangs=()=> ["Python","Java","C++"]
// const [lang1,lang2,lang3]=getLangs()

const person={
  name:"Ulaş Can Demirbağ",
  year:1999,
  salary:3000,
  showInfos:()=> console.log("Bilgiler Gösteriliyor")
}
const {name:isim,year:yil,salary:maas,showInfos:bilgileriGoster}=person
console.log(isim,yil,maas)
bilgileriGoster()