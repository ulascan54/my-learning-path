"use client"
import React from "react"
import Link from "next/link"

function Movie500() {
  return (
    <div
      style={{
        height: "100%",
        display: "flex",
        alignItems: "center",
        justifyContent: "center",
        flexDirection: "column",
      }}
    >
      <h1 style={{ fontSize: 27, fontWeight: "bold" }}>
        An error has occurred. Sorry for that!
      </h1>
      <Link
        href="/"
        style={{
          textDecoration: "underline",
          fontSize: 20,
          marginTop: 8,
          color: "#fafafa",
        }}
      >
        Go home
      </Link>
    </div>
  )
}

export default Movie500
