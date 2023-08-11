import styled, { css } from "styled-components"

export const Title = styled.h1`
  fots-size: 3rem;
  font-weight: bold;
  text-decoration: underline;
  ${(props) =>
    props.theme === "dark" &&
    css`
      background-color: black;
      color: white;
      &:hover {
        background: blue;
      }
    `}
`
