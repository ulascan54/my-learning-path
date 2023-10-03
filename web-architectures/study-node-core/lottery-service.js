let http = require("http")
let lottery = require("lottery")
const port = 7200
http
  .createServer((req, res) => {
    res.writeHead(200)
    res.end(JSON.stringify(lottery.draw(60, 6)))
  })
  .listen(port)

console.log(`Listening on ${port}`)
