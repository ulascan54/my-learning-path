

module.exports = {
  mode:'jit',
  purge: ['./src/**/*.html'],
  darkMode: false, // or 'media' or 'class'
  theme: {
    extend: {
      colors:{
        main:'#32445a'
      },
      spacing:{
        '15':'3.75rem'
      }
    },
  },
  variants: {
    extend: {},
  },
  plugins: [
    plugin(function({ addUtilities, theme, e }) {
      const calcUtilities = _.map(theme('spacing'), (value, key) => {
        return {
          [`.${e(`calc-h-full-${key}`)}`]: {
            transform: `calc(100% - ${value})`
          },
          [`.${e(`calc-w-full-${key}`)}`]: {
            transform: `calc(100% - ${value})`
          }
        }
      })

      addUtilities(calcUtilities)
    })
  ],
}
