function sayiUret(UstLimit = 5){
    return Math.ceil(Math.random()*UstLimit)
}
var sayi1= sayiUret(123123)
var sayi2= sayiUret()
var sayi3= sayiUret()
var sayi4= sayiUret()
var sayi5= sayiUret()
var sayi6= sayiUret()
/*
sayiUret()
var sayi1= Math.ceil(Math.random()*49)
var sayi2= Math.ceil(Math.random()*49)
var sayi3= Math.ceil(Math.random()*49)
var sayi4= Math.ceil(Math.random()*49)
var sayi5= Math.ceil(Math.random()*49)
var sayi6= Math.ceil(Math.random()*49)*/
console.log('Kolon :'+sayi1+' '+sayi2+' '+sayi3+' '+sayi4+' '+sayi5+' '+sayi6)
