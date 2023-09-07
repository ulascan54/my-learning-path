Customer = function (identity, fullname, email) {
  // before es6
  //constructor function
  this.identity = identity
  this.fullname = fullname
  this.email = email
  this.sayHello = function () {
    console.log("hello " + this.fullname)
  }
}

jack = new Customer("11111", "jack baure", "jack@gmail.com")
jack.sayHello()
