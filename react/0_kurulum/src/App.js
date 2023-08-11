import logo from "./logo.svg"
import styles from "./App.module.css"
import Test from "./Test"
import { Title } from "./Components"
import Bootstrap from "./Bootstrap"
import "./tailwind.css"
import Tailwind from "./Tailwind"
function App() {
  return (
    <div className={styles.App}>
      <Title>ULAŞŞŞ</Title>
      <Tailwind />
      <Bootstrap />
      <Title theme="dark">ULAŞŞŞ</Title>
      <Test />
      aa
      <img src="/logo192.png" alt="" />
      <img src={logo} alt="" />
    </div>
  )
}

export default App
