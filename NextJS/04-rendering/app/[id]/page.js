import React from "react"

function IdPage({ params }) {
  console.log("idpage" + params.id)
  return <div>IdPage {params.id}</div>
}

export default IdPage
