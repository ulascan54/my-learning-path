const WebSocket = require("ws")

const URL = "wss://stream.binance.com:9443/ws/btcusdt@trade"

let ws = new WebSocket(URL)

ws.on("message", (frame) => {
  let trade = JSON.parse(frame)

  console.log(trade)
})
