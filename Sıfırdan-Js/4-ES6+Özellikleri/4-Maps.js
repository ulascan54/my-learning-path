// * Mapler- Key(Anahtar) - Value(Değer)
// let myMap = new Map()//*oluşturma
// console.log(typeof myMap)
// console.log(myMap)

// const key1="Mustafa"
// const key2={a:10,b:20}
// const key3=()=>2
//*set
// myMap.set(key1,"String Değer")
// myMap.set(key2,"Object Literal Değer")
// myMap.set(key3,"Function Değer")
//*get
// console.log(myMap.get(key1))
// console.log(myMap.get(key2))
// console.log(myMap.get(key3))

// console.log(myMap)
//*map boyutu
// console.log(myMap.size)
const cities= new Map()
cities.set("Ankara",5)
cities.set("İstanbul",15)
cities.set("İzmir",5)
//* Foreach
cities.forEach(function(value,key){
  console.log(key,value)
})
//* for of
for (const [key,value] of cities) {//*destructing yapı
  console.log(key,value)
}
//*map keys
for (const key of cities.keys()) {
  console.log(key)
}
//*map values
for (const value of cities.values()) {
  console.log(value)
}
//* arrayden map oluşturma
const array=[["key1","value1"],["key2","value2"]]
const lastMap=new Map(array)
console.log(lastMap)

//* maplerden array oluşturma
const array2= Array.from(cities)
//* [["ankara",5],["istanbul",15],["izmir",4]]
console.log(array2)