// Karşılaştırma operatörleri

// ==
// ===
// !=
// !==
// >
// <
// >=
// <=

// console.log(2=="2") 
// console.log(2==2) 
// console.log(2==="2") 
// console.log(2!="2") 
// console.log(2!=="2") 

//mantıksal bağlaçlar

// Not operatörü
// console.log(!(2==2));
//and operatörü
// console.log((2==2) && ("ahmet"=="ahmet"))
//or yada operatörü
// console.log((2==3) || ("ahmet"=="ahmet"))

//koşul if
const error=true;
if(error==true){
  console.log("Hata oluştu")
}
else{
  console.log("hata yok")
}

const number=120
if (number===100) {
  console.log("sayı 100'e eşit")
}
else{
  console.log("sayı 100'e eşit değil")
}
// tek işlem varsa
if(number ===100) console.log("sayı 100")
else console.log("sayı 100 değil")
//ternary operatör
console.log(number===100 ? "sayı 100 " : "sayı 100 değil")

