//* callback fonksiyonları
//! asenkron işlemlerimizi yönetmemizi sağlar

// const langs=["Python","Java","C++"]

// langs.forEach(lang => {
//   console.log('lang :>> ', lang);//* fonsiyonu parametre olarak gönderdik
// });

// document.getElementById("btn").addEventListener("click",function(){//*callback fonsiyon
//   console.log("tıkla")
// })
// function process1(){//! asenkron bir durum sözkonusudur set time outla
//   //* callback fonsiyonlarımızı yönettik
//   setTimeout(function(){
//   console.log("process1")
//   },3000)
// }

// function process2(){
//   setTimeout(function(){
//     console.log("process2")
//     },2000)
// }
// process1()
// process2()
// console.log("naber")

//*asenkron durumu senkron yapmak istersek?
// function process1(callback){
//   setTimeout(function(){
//   console.log("process1")
//   callback()
//   },3000)
// }

// function process2(){
//   setTimeout(function(){
//     console.log("process2")
//     },2000)
// }

// process1(process2)//!iç içe yazarak önce p1 sonra p2 nin çalışmasını sağladık
// //!böylece senkronlaştırdık

//!örnek
const langs=["Python","Java","C++"]
function addLang(lang,callback) {
  setTimeout(() => {
    langs.push(lang)
    console.log("eklendi")
    callback()
  }, 2000);
}
function getAllLangs() {
  setTimeout(() => {
    langs.forEach(lang => {
      console.log(lang);
    });
  }, 1000);
  
}
addLang("JavaScript",getAllLangs)




