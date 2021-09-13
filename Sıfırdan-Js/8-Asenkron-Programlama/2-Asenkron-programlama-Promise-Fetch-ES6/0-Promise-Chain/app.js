// function getData(data) { //* Promise Objesi Döndüren Fonksiyon
//   return new Promise(function (resolve, reject) {
//     setTimeout(function () {
//       // reject('olumsuz sonuç')//! olumlu sonç yollamak için resolve
//       // //! hata yollamak için reject kullanırız
//       if (typeof data === 'string') {
//         resolve(data)
//       } else {
//         reject(new Error('lütfen string bir değer girin')) //* eroro objesini çağırdım
//       }
//     }, 2000);
//   })

// }
// // console.log(getData('Merhaba'));//*biz
// // getData('Merhaba').then(function(response){//*resolve yakalamak için kulanabiliriz
// //     console.log(response)
// // })
// // getData('merhaba').catch(function(err){//*reject yakalamak için kulanabiliriz
// //   console.log(err)
// // })
// //* örnek int gönderildiğinde hata verensin
// getData(12)
//   .then(response =>  //!burda then ve catch i birbirine bağlayarak daha iyi bir yapı kurduk
//     console.log('gelen değer:', response)
//     ).catch(err => console.error(err) //*hata yazdırmak için console.error 
//   )

function addTwo(number){
  return new Promise((resolve,reject)=>{
      setTimeout(() => {
        if(typeof number=='number'){
          resolve(number+2)
        }
        else{
          reject(new Error('Lütfen bir sayı girin'))
        }
      }, 2000);
  })
}
addTwo('merhaba')
.then(response=> {console.log(response)
  return response+2
}).then(response2=>console.log(response2))//* promis chain yapısında yani birden çok then kullanıp yakaladığımız zamanlarda YALNIZCA 1 CATCH kullanılır
.catch(err=>console.error(err))//! yalnızca bir catch ancak birden çok then kullana biliriz
//! BUNUN ADI PROMISE CHAIN dir