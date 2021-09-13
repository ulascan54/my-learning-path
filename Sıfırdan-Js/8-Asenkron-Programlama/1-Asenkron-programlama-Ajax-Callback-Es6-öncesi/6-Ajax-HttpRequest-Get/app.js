//* Ajax,callback,http requests

class Request {
  constructor() {
    this.xhr = new XMLHttpRequest();
  }
  //*GET request

  get(url, callback) {
    // this.xhr.open("GET",url)//*bağlantı açık
    // //! ilkel yönte: const temp= this
    // this.xhr.onload=function(){
    //   if (temp.xhr.status===200) {
    //       console.log(temp.xhr.responseText)
    //   }
    // }
    // this.xhr.send()
    // this.xhr.open("GET",url)//*bağlantı açık
    // this.xhr.onload=function(){
    //   if (this.status===200) {//! ikinci yöntem
    //       console.log(this.responseText)
    //   }
    // }
    // this.xhr.send()

    // this.xhr.open("GET",url)//*bağlantı açık
    // this.xhr.onload=function(){//! üçüncü yöntem bind
    //   if (this.xhr.status===200) {
    //       console.log(this.xhr.responseText)
    //   }
    // }.bind(this)
    // this.xhr.send()

    this.xhr.open("GET", url) //*bağlantı açık
    this.xhr.onload = () => { //! dördüncü yöntem en temizi arrow function
      if (this.xhr.status === 200) {
        callback(null, this.xhr.responseText) //!isteğimiz bitti
      } else {
        callback("Hata oluştu", null)
      }
    }
    this.xhr.send()
  }
}

const request = new Request()
// request.get("https://jsonplaceholder.typicode.com/albums", function (err, response) {
//   if (err === null) {
//     //*başarılı
//     console.log(response)
//   } else {
//     console.log(err)
//   }
// })
request.get("https://jsonplaceholder.typicode.com/albums/50", function (err, response) {
  if (err === null) {
    //*başarılı
    console.log(response)
  } else {
    console.log(err)
  }
})