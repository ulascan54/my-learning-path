// JS: 1) Functional programming (Core lang. feature)
// 2) Asynchronous Functions (Core lang. feature)
// 3) Event-Driven Programming (Core lang. feature)
// 4) Object-Oriented Programming (Core lang. feature)
// 5) Reactive Programming (Library -> Angular/Vue/KO),(Backend (RxJs))
class App {
  //es6
  constructor() {
    this.counter = 0
    this.update = this.update.bind(this)
    this.init = this.init.bind(this)
  }
  init() {
    this.spanCounter = document.getElementById("counter")
    window.setInterval(this.update, 1000)
  }
  update() {
    this.counter++
    this.spanCounter.innerText = this.counter
  }
}
function app() {
  let counter = 0
  let spanCounter = document.getElementsByTagName("span")[0]

  setInterval(() => {
    counter++
    spanCounter.innerText = counter
  }, 1000)
}
let application = new App()
window.onload = application.init
