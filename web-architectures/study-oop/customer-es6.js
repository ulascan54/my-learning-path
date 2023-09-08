class Customer {
  constructor(identity, fullname, email) {
    this.identity = identity
    this.fullname = fullname
    this.email = email
    //this.sayHello = this.sayHello.bind(this) // for referance
  }
  sayHello() {
    console.log(`Hello, ${this.fullname} !`)
  }
  // second method for reference
  lambdaSayHello = () => {
    console.log(`Hello, ${this.fullname} !!`)
  }
}
jack = new Customer("11111", "jack baure", "jack@gmail.com")
//jack.sayHello() // sayhello , jack-> this
window.setInterval(jack.sayHello, 3000) //window
window.setInterval(jack.lambdaSayHello, 3100) //window
//jack.sayhello çalıştığında window -> this olur
//window.fullname = "kate ousten"
