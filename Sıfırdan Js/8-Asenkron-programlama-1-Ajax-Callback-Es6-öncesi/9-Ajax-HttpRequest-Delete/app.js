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
  delete(url,callback){
    this.xhr.open("DELETE",url)
    this.xhr.onload=()=>{
      if (this.status===200) {
        callback(null, this.xhr.responseText)
      }
      else{
        callback(null, this.xhr.responseText)
      }
    }
    this.xhr.send()

  }
  post(url, data, callback) {
    this.xhr.open("POST", url)
    this.xhr.setRequestHeader("Content-type", "application/json") //*Json verisi gödericeğimizi belirtik
    this.xhr.onload = () => {
      if (this.xhr.status === 201) {
        callback(null, this.xhr.responseText)
      } else {
        callback("Hata oluştu", null)
      }
    }
    this.xhr.send(JSON.stringify(data))
  }
  put(url, data, callback) {
    this.xhr.open("PUT", url)
    this.xhr.setRequestHeader("Content-type", "application/json")
    this.xhr.onload = () => {
      if (this.xhr.status == 200) {
        callback(null, this.xhr.responseText)
      } else {
        callback("Hata oluştu", null)
      }
    }
    this.xhr.send(JSON.stringify(data))
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
// request.get("https://jsonplaceholder.typicode.com/albums/50", function (err, response) {
//   if (err === null) {
//     //*başarılı
//     console.log(response)
//   } else {
//     console.log(err)
//   }
// })

// request.post("https://jsonplaceholder.typicode.com/albums", {
//   userId:9,
//   title:"thrillerr"
// }, function (err, album) {
//   if (err === null) {
//     console.log(album)

//   } else {
//     console.log(err)

//   }
// })

// request.put("https://jsonplaceholder.typicode.com/albums/1", {
//   userId: 2,
//   title: "of"
// }, function (err, update) {
//   if (err==null) {
//     console.log(update);
//   }
//   else{
//     console.log(err);
//   }
// })
  request.delete("https://jsonplaceholder.typicode.com/albums/1", function(err,response){
    if (err==null) {
      console.log(response);
    }
    else{
      console.log(err);
    }
  })
