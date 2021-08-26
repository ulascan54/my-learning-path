class Currency{
  constructor(secondCurrency,url){
    this.secondCurrency=secondCurrency
    this.url=url
    this.amount=null
  }
  exchange(){
    return new Promise((resolve,reject)=>{
      fetch(this.url)
      .then(response=>response.json())
      .then(data=>{
        if (data.base==="EUR") {
          const parity=data.rates[this.secondCurrency]
          const amount2=Number(this.amount)
          let total=parity*amount2
          resolve(total)
        }else{
          const qates="USD"+this.secondCurrency
          const parity=data.quates[this.secondCurrency]
          const amount2=Number(this.amount)
          let total=parity*amount2
          resolve(total)
        }
      })
      .catch(err=>reject(err))
    })
  }
  changeAmount(amount){
    this.amount=amount
  }
  changeUrl(url){
    this.url=url
  }
  changeSecondCurrency(newSecondCurrency){
    this.secondCurrency=newSecondCurrency
  }
}