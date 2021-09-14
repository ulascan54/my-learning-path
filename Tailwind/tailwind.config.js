module.exports = {
  mode:'jit',
  purge: ['./src/**/*.html'],
  darkMode: false, // or 'media' or 'class'
  theme: {
    extend: {
      spacing:{
        '15':'3.75rem'
      }
    },
  },
  variants: {
    extend: {},
  },
  plugins: [],
}
