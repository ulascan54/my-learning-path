var sayi1 = 29
var sayi2 = 30
var sayi3 = 2

//En büyük sayıyı bulunuz
if(sayi1>sayi2 && sayi1>sayi3){
console.log("En büyük sayi:"+sayi1+" dur")
}

else if(sayi2>sayi1 && sayi2>sayi3){
  console.log("En büyük sayi:"+sayi2+" dur")
}
else {
  console.log("En büyük sayi:"+sayi3+" dur")
}

//başka bir yöntem
var enBuyuk=sayi1;
if(enBuyuk<sayi2){enBuyuk=sayi2}
if(enBuyuk<sayi3){enBuyuk=sayi3}
console.log("En büyük sayi:"+enBuyuk)
