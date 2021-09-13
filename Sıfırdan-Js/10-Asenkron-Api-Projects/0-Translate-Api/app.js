//* Prototype Ajax CallBack

eventListeners()

function eventListeners(){
  document.getElementById("translate-form").addEventListener("submit",translateWord)
  //* change event
  document.getElementById("language").onchange=function(){
    //*arayüz işlemleri
    ui.changeUI()
  }
}
const ui = new UI()
const  translate= new Translate(document.getElementById("word").value,document.getElementById("language").value)
function translateWord(e) {
  translate.changeParametres(document.getElementById("word").value,document.getElementById("language").value)

  translate.translateWord(function(err,response){
    if (err!==null) {
      console.error(err);
    }
    else{
      ui.displayTranslate(response)
    }
  })
  e.preventDefault();
}