let value;
const programmer = {
  name: "Ulaş Can Demirbağ",
  age: 22,
  email: "ulascandemirbag@gmail.com",
  langs: ["Pythoon", "Java", "Javascript"],

  address: {
    city: "Ankara",
    street: "Bahçelievler"
  },
  work: function () {
    console.log("Programcı Çalışıyor...")
  }
}
value=programmer
value=programmer.email
value=programmer["email"]
value=programmer.langs
value=programmer.address.city
value=programmer.work()

const programmers=[
  {name:"Mustafa Murat", age : 25},
  {name:"ulaş", age : 25}
]
value=programmers[0].name
console.log(value)