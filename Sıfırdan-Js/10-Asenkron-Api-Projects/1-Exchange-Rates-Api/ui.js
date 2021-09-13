class UI{
  constructor(firstSelect,secondSelect){
      this.firstSelect=firstSelect
      this.secondSelect=secondSelect
      this.outputFirst=document.getElementById("outputFirst")
      this.outputSecond=document.getElementById("outputSecond")
      this.outputResult=document.getElementById("outputResult")
  }
  changeFirst(){
    this.outputFirst.textContent=firstSelect.options[firstSelect.selectedIndex].textContent
  }
  changeSecond(){
    this.outputSecond.textContent=secondSelect.options[secondSelect.selectedIndex].textContent
  }
  addResult(result){
    this.outputResult.value=result
  }
}