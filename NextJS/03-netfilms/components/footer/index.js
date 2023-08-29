import Link from "next/link"
import React from "react"
import styles from "./styles.module.css"

function Footer() {
  return (
    <footer className={styles.footer}>
      Made wity ♥️ by&nbsp;
      <Link href={"https://github.com/ulascan54"} target="_blank">
        Ulaş Can Demirbağ
      </Link>
    </footer>
  )
}

export default Footer
