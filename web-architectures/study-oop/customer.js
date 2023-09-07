Customer = function (identity, fullname, email) {
  // this -> object reference
  var self = this // reference değişkende saklarız
  // before es6
  //constructor function
  this.identity = identity
  this.fullname = fullname
  this.email = email
  this.sayHello = function () {
    console.log("hello " + self.fullname)
  }
}

jack = new Customer("11111", "jack baure", "jack@gmail.com")
jack.sayHello() // sayhello , jack-> this
setInterval(jack.sayHello, 3000) //window
//jack.sayhello çalıştığında window -> this olur
window.fullname = "kate ousten"
setInterval(jack.sayHello, 3000) //window
