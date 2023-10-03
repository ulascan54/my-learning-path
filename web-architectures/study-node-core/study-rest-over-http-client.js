const fetch = require("node-fetch")
const URL = "https://api.binance.com/api/v3/ticker/price?symbol=BTCUSDT"

setInterval(() => {
  fetch(URL)
    .then((res) => res.json())
    .then((ticker) => console.log(ticker))
    .catch((err) => console.log(err))
}, 5000)
