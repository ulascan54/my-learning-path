document.getElementById("amount").addEventListener("input",change)
function change(){
  const xhr = new XMLHttpRequest
  xhr.open("GET","http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d",true)
  xhr.onload=function(){
    if(this.status==200){
      const response= JSON.parse(this.responseText)
      let euro = Number(document.getElementById("amount").value)
      document.getElementById("tl").value=euro * response.rates.TRY
    }
  }
  xhr.send()
}