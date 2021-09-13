let value;
const numbers = [43, 56, 33, 23, 44, 35, 5];
// const numbers2= new array(1,2,3,4);

const langs = ["python", "Java", "C++", "Javascript"];
const a = ["Merhaba", 22, null, undefined, 3.14];
//uzunluk
value = numbers.length;
//indeksleme
value = numbers[0]
value = numbers[2]
value = numbers[numbers.length - 1]

// herhangi bir index değeri değiştirme
numbers[2] = 1000;
value = numbers;
//index of
value = numbers.indexOf(1000);

//ARRAY Sonuna değer ekleme -Push
numbers.push(2000);
value=numbers;

// array in başına değer ekleme
numbers.unshift(3000)
value=numbers;

//arrin sonundan değer atma
numbers.pop();
value=numbers;

//arrayin başından eleman atma
numbers.shift();
value=numbers;

// aralıktan arayden değer atma
numbers.splice(0,3);
value=numbers;

// reverse
numbers.reverse();
value=numbers;

value=numbers.sort();
value=numbers.sort(function(x,y){return x-y;});// küçükten büyüğe
value=numbers.sort(function(x,y){return y-x;}); //büyükten küçüğe
console.log(value);
