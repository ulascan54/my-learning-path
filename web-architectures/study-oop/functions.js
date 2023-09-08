let update = function () {
  //1
  this.counter++
  this.spanCounter.innerText = this.counter
}
function update2() {
  //2.
  this.counter++
  this.spanCounter.innerText = this.counter
}
let update3 = () => {
  //lambda function, arrow function
  //3.
  this.counter++
  this.spanCounter.innerText = this.counter
}
// 3 üde çalışır ancak ilk ikisi aynı olsada 3. method biraz farklıdır.
// o farklılıkta referance alanındadır.
