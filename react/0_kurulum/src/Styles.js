import logo from "./logo.svg"
import styles from "./App.module.css"
import Test from "./Test"
import { Title } from "./Components"
import Bootstrap from "./Bootstrap"
//import "./tailwind.css"
import "./style.scss"
function Styles() {
  return (
    <div className={styles.App}>
      <Title>ULAŞŞŞ</Title>
      <p className="env">
        Lorem ipsum dolor sit amet consectetur, adipisicing elit. Harum, laborum
        totam ipsam vel nemo repellendus, doloribus alias quasi error aut
        dolorem mollitia beatae maxime dicta ad voluptatibus quos, architecto
        consequuntur? Laudantium animi provident error vel consequatur magnam
        numquam maxime deleniti, culpa officia ratione nisi veritatis enim sunt,
        laboriosam explicabo vero! Laborum mollitia necessitatibus vero aut
        possimus sequi nostrum officiis maxime? Maiores voluptate ea, hic
        tenetur illum facere! Molestiae tempora dicta, voluptatem facilis
        necessitatibus dolores autem. Quia rem doloremque accusantium suscipit
        consectetur odit tenetur, praesentium culpa harum modi dicta reiciendis
        ducimus. Dolores corrupti veniam ex dolore saepe explicabo doloribus.
        Doloremque accusantium quas aut totam explicabo nihil similique,
        necessitatibus quos sapiente. Adipisci totam, aut eius hic sed libero
        tempora ea blanditiis expedita. Animi vitae, magni iure quos voluptatum
        magnam porro illum quis amet ea inventore, unde mollitia eveniet
        dignissimos vel aut itaque dolore. Ipsam, quasi similique ex esse veniam
        ducimus nostrum ut!
        <span>test</span>
      </p>
      {/* <Tailwind /> */}
      <Bootstrap />
      <Title theme="dark">ULAŞŞŞ</Title>
      <Test />
      aa
      <img src="/logo192.png" alt="" />
      <img src={logo} alt="" />
    </div>
  )
}

export default Styles
