//! Set Timeout
setTimeout(() => {
  console.log('naber :>> ');
}, 5000);

//!set interval
let i=0
let value = setInterval(() => {
  i++
  console.log('sayı:',i)
}, 1000);

//!clear Interval
document.getElementById("btn").addEventListener("click",function(){
  clearInterval(value)
})