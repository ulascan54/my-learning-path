//*ASYNC

// async function test(data){
//   //* Promise return new promise
//   return data
//   // return new Promise((resolve,reject)=>{//* üsteki yazı burdaki kod bloğuna eşittir
//   //   resolve(data)
//   // })
// }
// //* eğer fonsiyonların başına async yazarsanız fonsyionlar mutlaka promise döndürür
// // console.log(test("merhaba"))
// test('merhaba').then(response=> console.log(response))

//*AWAIT
//*bir promise 'in resolve etmesini yanı olumlu dönüş yapmasını bekleyen anahtar kelimedir

// async function test(data){
//   let promise= new Promise((resolve,reject)=>{
//     setTimeout(() => {
//       resolve('bu bir değerdir')
//     }, 3000);
//   })
//   let response= await promise //*bu satır buradad 3 saniye bekliyecektir
//   console.log(response)
//   console.log('naber')
//   //! await sadece async fonksiyonların içinde çalışır
//   return response
// }

// test('merhaba').then(response=>console.log(response))


// //! hata alma durumunda ne olur?=
// async function testData(data){
//   let promise = new Promise((resolve,reject)=>{
//     setTimeout(() => {
//       if (typeof data=='string') {
//         resolve(data)
//       }
//       else{
//         reject(new Error("lütfen string bir değer girin"))
//       }
//     }, 5000);
//   })
//   const response=await promise
//   return response
// }
// testData(21).then(data=>console.log(data)).catch(err=>console.error(err))

async function getCurrency(url){
  const response=await fetch(url)//*responce object
  const data=await response.json()
  return data
}
getCurrency("http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d")
.then(response=>console.log(response))