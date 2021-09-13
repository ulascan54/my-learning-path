const amountElement = document.getElementById("amount")
const firstSelect = document.getElementById("firstCurrency")
const secondSelect = document.getElementById("secondCurrency")
const url = null
const currency= new Currency("TRY","http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d&format=1")
const ui= new UI(firstSelect,secondSelect)
// http://api.currencylayer.com/live?access_key=9d5a93e13d252b204cf0b08497153332&format=1
// http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d&format=1
//usd-eur

eventListeners()

function eventListeners() {
  amountElement.addEventListener("input", exchangeCurrency)
  firstSelect.onchange = function () {
    ui.changeFirst()
    if (firstSelect.options[firstSelect.selectedIndex].textContent === "EUR") {
      this.url = "http://api.exchangeratesapi.io/v1/latest?access_key=83360a7b62cbb1ba9436e8d81cb4912d&format=1"
    } else {
      this.url = "http://api.currencylayer.com/live?access_key=9d5a93e13d252b204cf0b08497153332&format=1"
    }
    currency.changeUrl(this.url)
  }
  secondSelect.onchange = function () {
    ui.changeSecond()
    currency.changeSecondCurrency(secondSelect.options[secondSelect.selectedIndex].textContent)
  }
}

function exchangeCurrency() {
  currency.changeAmount(amountElement.value)
  currency.exchange()
  .then(result=>ui.addResult(result))
  .catch(err=> console.log(err))
}