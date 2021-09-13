function sayiUret(UstLimit = 49){
  return Math.ceil(Math.random()*UstLimit)
}
for(var x=1; x<=8; x++){
  console.log(x+".KOLON----------------")
    for (var i = 1; i <=6; i++) {
    console.log(sayiUret());
    }
}
