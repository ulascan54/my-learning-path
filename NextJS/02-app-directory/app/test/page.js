async function delay(ms) {
  return await new Promise((resolve) => setTimeout(resolve, ms))
}

async function TestRoute() {
  await delay(3000)
  return <div>TestRoute</div>
}
export default TestRoute
