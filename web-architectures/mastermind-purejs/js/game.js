class GameViewModel {
  constructor() {
    this.tries = 0
    this.gameLevel = 3
    this.secret = this.createSecret
  }
}
