import React from "react"

export default function BlogPage({ searchParams }) {
  if (searchParams.error === "true") {
    throw new Error("this is an error")
  }
  return <div>BlogPage</div>
}
