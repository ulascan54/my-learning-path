import "./App.css"
import { BrowserRouter as Router, Route, Routes } from "react-router-dom"
import { Breadcrumb, Layout, Menu, theme } from "antd"
const { Header, Content, Footer } = Layout
const App = () => {
  const {
    token: { colorBgContainer },
  } = theme.useToken()
  return (
    <Layout className="layout">
      <Header
        style={{
          display: "flex",
          alignItems: "center",
        }}
      >
        <div className="demo-logo" />
        <Menu
          theme="dark"
          mode="horizontal"
          defaultSelectedKeys={["2"]}
          items={() => (
            <div>
              <div className="">selam</div>
              <div className="">selam</div>
              <div className="">selam</div>
              <div className="">selam</div>
            </div>
          )}
        />
      </Header>
      <Content
        style={{
          padding: "0 50px",
        }}
      >
        <Breadcrumb
          style={{
            margin: "16px 0",
          }}
        >
          <Breadcrumb.Item>Home</Breadcrumb.Item>
          <Breadcrumb.Item>List</Breadcrumb.Item>
          <Breadcrumb.Item>App</Breadcrumb.Item>
        </Breadcrumb>
        <div
          className="site-layout-content"
          style={{
            background: colorBgContainer,
          }}
        >
          Content
        </div>
      </Content>
      <Footer
        style={{
          textAlign: "center",
        }}
      >
        Ant Design ©2023 Created by Ant UED
      </Footer>
    </Layout>
  )
}

export default App
