// Fonsiyon tanımlama
function merhaba(name,age){
  console.log(`İSİM ${name} Yaş ${age}`);
}
merhaba()//fonksiyon çağrısı (function Call)

// function experssion
const merhaba = function(name){
  console.log("merhaba"+name)
}

merhaba("murat")

//Immediately invoked function expression

(function (name){
  console.log("Merhaba:"+name)
})("Murat")