let http = require("http")
const port = 7100
http
  .createServer((req, res) => {
    res.writeHead(200)
    let jack = {
      identity: "11111111111",
      fullName: "Jack Smith",
      email: "jack@example.com",
    }
    res.end(JSON.stringify(jack))
  })
  .listen(port)

console.log(`Listening on ${port}`)
