function Translate(word, language) {
  this.word = word
  this.language = language
  //*xhr object
}
Translate.prototype.translateWord = function (callback) {
  //* ajax işlemleri
  const data = `q=${this.word}&target=${this.language}&source=tr`;

  const xhr = new XMLHttpRequest();
  xhr.withCredentials = true;
  xhr.open("POST", "https://google-translate1.p.rapidapi.com/language/translate/v2");
  
  xhr.onload=function(){
    if (this.status === 200) {
      const json= JSON.parse(this.responseText)
      const text= json.data.translations[0].translatedText

      callback(null,text)
    }
    else{
      callback("Bir hata oluştu",null)
    }
  }
  
  xhr.setRequestHeader("content-type", "application/x-www-form-urlencoded");
  xhr.setRequestHeader("x-rapidapi-host", "google-translate1.p.rapidapi.com");
  xhr.setRequestHeader("x-rapidapi-key", "d8d1e80d49mshfc596badb1eb848p13a906jsnafcebf342e0b");
  
  xhr.send(data);
}
Translate.prototype.changeParametres=function(newWord,newLanguage){
  this.word=newWord
  this.language=newLanguage
}
