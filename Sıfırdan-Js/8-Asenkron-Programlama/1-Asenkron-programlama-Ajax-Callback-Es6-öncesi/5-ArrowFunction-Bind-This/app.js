const person={
  age:25,
  // tellAge:function () {
  //   //* this:person
  //   console.log(this);
  //   console.log(this.age);
  // }.bind(this)//! eğer buraya bind this dersek dışarıdaki disi içeri yollarız
  tellAge:()=>{//! eğer arrow function kullanırsak yine bind yapmışız gibi sonuç alırız
    console.log(this);
    console.log(this.age);
  }
  //* this:window
}
person.tellAge()