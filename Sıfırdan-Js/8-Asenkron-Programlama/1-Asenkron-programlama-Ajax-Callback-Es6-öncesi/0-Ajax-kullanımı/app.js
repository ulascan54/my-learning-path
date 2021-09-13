document.getElementById("btn").addEventListener("click", function () {
  const xhr = new XMLHttpRequest()
  xhr.onreadystatechange = function () {
    // console.log(this.readyState);//!server control
    // console.log('this.status :>> ', this.status);
    // if (this.status==200 && this.readyState==4) {//! böyle bir url varsa ve response hazırsa

    //   //!response hazır
    //   console.log('this.responseText :>> ', this.responseText);//*response.text yazılır
    // }

    // xhr.onload =()=> { //! üsteki durumu burada bu fonksiyon iledede kontrol sağlaya biliriz
    //   //! aslında bu ready state 4 olduğunda çalışsın demek
    //   if (this.status === 200) {
    //     console.log('this.responseText :>> ', this.responseText);
    //   }
    // }
    // xhr.onprogress = () => {//! bu fonksiyon ise progress işlemi yapılırken çalışır
    //   //!yani ready state 3 ise
    //         console.log('progress işleniyor...',this.readyState);
    // }
    xhr.onload =()=>{
      if (this.status==200) {
          document.getElementById("ajax").textContent=this.responseText
      }
    }


  }
  xhr.open("GET", "example.txt", true)
  xhr.send()

})

// *onreadystatechange	Defines a function to be called when the readyState property changes
// ?readyState	Holds the status of the XMLHttpRequest.
// ?0: request not initialized
// ?1: server connection established
// ?2: request received
// ?3: processing request
// ?4: request finished and response is ready
// !status	200: "OK"
// !403: "Forbidden"
// !404: "Page not found"
// !For a complete list go to the Http Messages Reference
// *statusText	Returns the status-text (e.g. "OK" or "Not Found")