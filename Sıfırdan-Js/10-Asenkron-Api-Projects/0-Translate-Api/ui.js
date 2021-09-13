function UI(){
    this.outputImage= document.getElementById("outputImage")
    this.outputLanguage=document.getElementById("outputLanguage")
    this.outputWord=document.getElementById("outputWord")
    this.languageList=document.getElementById("language")
}

UI.prototype.changeUI=function(){
  //*arayüz değiştir
  this.outputImage.src=`images/${this.languageList.value}.png`
  this.outputLanguage.innerText=this.languageList.options[this.languageList.options.selectedIndex].innerText
} 
UI.prototype.displayTranslate=function(response){
  this.outputWord.textContent=response
}