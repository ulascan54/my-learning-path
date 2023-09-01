"use client"
import React, { useEffect } from "react"
import Button from "./button"
// import ButtonC from "@/components/button"

function Home() {
  useEffect(() => {
    console.log("use effect")
  }, [])
  console.log("HomePage")
  return (
    <div>
      <Button />
      {/* <ButtonC /> */}
    </div>
  )
}
export default Home
