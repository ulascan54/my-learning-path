class Request {
  async get(url) {
    const response= await fetch(url)//*response object
    const data = await response.json()//*Json object
    return data
  }

  async post(url, data) {
    const response= await fetch(url, {
            method: 'POST',
            body: JSON.stringify(data),
            headers: {
              'Content-type': 'application/json; charset=UTF-8',
            }
          })
    const value= await response.json()
    return value
  }

  async put(url, data) {
    const response= await fetch(url, {
      method: 'PUT',
      body: JSON.stringify(data),
      headers: {
        'Content-type': 'application/json; charset=UTF-8'
      }
    })
    const value=await response.json()
    return value
  }

  async delete(url) {
    const response= await  fetch(url, {
      method: 'DELETE'
    })
    const data = await response.json()
    return "Veri Silme işlemi başarılı"
    
  }
}

const request = new Request()

// request.delete("https://jsonplaceholder.typicode.com/albums/10")//*delete request
// .then(response=>console.log(response))
// .catch(err=>console.log(err))

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