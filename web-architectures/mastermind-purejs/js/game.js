class Move {
  constructor(guess, message) {
    this.guess = guess
    this.message = message
  }
}

class GameViewModel {
  constructor() {
    // #region fields
    this.tries = 0
    this.gameLevel = 3
    this.secret = this.createSecret()
    this.moves = []
    //#endregion
  }

  createSecret = () => {
    console.log(this.secret)
    let digits = []
    digits.push(this.createRandomDigit(1, 9))
    while (digits.length < this.gameLevel) {
      let digit = this.createRandomDigit(0, 9)
      if (!digits.includes(digit)) digits.push(digit)
    }
    // let number = 0
    // for (let digit of  digits) {
    //   number = 10 * number + digit
    // }
    // return number
    return digits.reduce((number, digit) => 10 * number + digit, 0)
  }

  play(guess = 123) {
    guess = Number(guess) // 549
    this.tries++
    if (guess === this.secret) {
      this.gameLevel++
      //*: check whether game is over!
      if (this.gameLevel > 10) {
        this.gameLevel = 3
        this.init()
      } else {
        this.init()
      }
    } else {
      //*: check whether tries is over 10
      if (this.tries > 5 + this.gameLevel * 3) {
        let temp = this.secret
        this.init()
        this.moves.push(
          new Move("Secret is :" + temp, "Game is Over! You Lose :(")
        )
        return
      }
      let message = this.createMessage(this.secret, guess)
      this.moves.push(new Move(guess, message))
    }
  }

  createRandomDigit = (max, min) => {
    return Math.floor(Math.random() * (max - min + 1)) + min
  }

  init = () => {
    this.moves = []
    this.secret = this.createSecret()
    this.tries = 0
  }

  createMessage = (secret, guess) => {
    let stringSecret = secret.toString()
    let stringGuess = guess.toString()
    let perfectMatch = 0
    let partialMatch = 0
    for (let i = 0; i < stringSecret.length; ++i) {
      let s = stringSecret.charAt(i)
      for (let j = 0; j < stringGuess.length; ++j) {
        let g = stringGuess.charAt(j)
        if (s === g) {
          if (i === j) {
            perfectMatch++
          } else {
            partialMatch++
          }
        }
      }
    }
    return this.createMessageFromMatches(perfectMatch, partialMatch)
  }

  createMessageFromMatches = (perfectMatch, partialMatch) => {
    if (perfectMatch === 0 && partialMatch === 0) return "No match :("
    let message = ""
    if (partialMatch > 0) message = `-${partialMatch}`
    if (perfectMatch > 0) message += `+${perfectMatch}`

    return message
  }
}
