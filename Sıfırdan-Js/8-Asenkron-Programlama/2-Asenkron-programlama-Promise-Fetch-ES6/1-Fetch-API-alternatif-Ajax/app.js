function getTextFile(){
  fetch('example.txt')
  .then(response=> response.text())
  .then(data=>console.log(data))
  .catch(err=> console.log(err))
}
function getJsonFile(){
  fetch('example.json')
  .then(response=>response.json())
  .then(data=>console.log(data))
  .catch(err=>console.log(err))

}
function getExternalAPI(){
  fetch("http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d")
  .then(response=> response.json())
  .then(data=> {
       input.addEventListener('input',function(){
       document.getElementById('label').textContent=Number(document.getElementById('input').value) *  data.rates.TRY
    })
  })
  .catch(err=>console.log(err))
}
// getTextFile()
// getJsonFile()
getExternalAPI()

