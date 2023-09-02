"use client"
import React, { useEffect, useState } from "react"
import Button from "./button"

function Home() {
  const [message, setMessage] = useState("initial")
  useEffect(() => {
    setMessage("use effect manipüle etti")
    console.log("use effect")
  }, [])
  console.log("HomePage")
  return (
    <div>
      <button
        onClick={() => {
          setMessage("adece")
        }}
      >
        set
      </button>
      <Button />
      {message}
    </div>
  )
}
export default Home
