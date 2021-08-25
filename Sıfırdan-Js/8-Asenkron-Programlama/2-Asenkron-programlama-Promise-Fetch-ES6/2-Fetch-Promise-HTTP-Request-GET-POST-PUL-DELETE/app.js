class Request {
  get(url) {
    return new Promise((resolve, reject) => {
      fetch(url)
        .then(response => response.json())
        .then(data => resolve(data))
        .catch(err => reject(err))

    })
  }
  post(url, data) {
    return new Promise((resolve, reject) => {
      fetch(url, {
          method: 'POST',
          body: JSON.stringify(data),
          headers: {
            'Content-type': 'application/json; charset=UTF-8',
          }
        })
        .then(response => response.json())
        .then(data => resolve(data))
        .catch(err => reject(err))
    })
  }
  put(url, data) {
    return new Promise((resolve, reject) => {
      fetch(url, {
          method: 'PUT',
          body: JSON.stringify(data),
          headers: {
            'Content-type': 'application/json; charset=UTF-8'
          }
        })
        .then(response => response.json())
        .then(data => resolve(data))
        .catch(err => reject(err))
    })
  }
  delete(url) {
    return new Promise ((resolve,reject)=>{
      fetch(url, {
        method: 'DELETE'
      })
      .then(response=>response.json())
      .then(data=> resolve(data))
      .catch(err=>reject(err))
  
    })
    
  }
}

const request = new Request()

request.delete("https://jsonplaceholder.typicode.com/albums/10")//*delete request
.then(response=>console.log(response))
.catch(err=>console.log(err))



// request.put("https://jsonplaceholder.typicode.com/albums/10", {//*Put request
//     userId: 20,
//     title: 'ulaş'
//   })
//   .then(updated => console.log('updated >> ', updated))
//   .catch(err => console.log('err >> ', err))


// request.post("https://jsonplaceholder.typicode.com/albums",{userId:20,title:'ulaşcan'})//*postrequest
// .then(newAlbum=>console.log(newAlbum))
// .catch(err=> console.log(err))


// request.get("https://jsonplaceholder.typicode.com/albums")//* getrequest
// .then(albums=>{
//   console.log(albums)

// })
// .catch(err=>console.log(err))