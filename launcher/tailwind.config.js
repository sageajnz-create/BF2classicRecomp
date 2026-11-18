/** @type {import('tailwindcss').Config} */
export default {
  content: [
    "./index.html",
    "./src/**/*.{js,ts,jsx,tsx}",
  ],
  theme: {
    extend: {
      colors: {
        recomp: {
          dark: '#0B0E14',
          panel: '#151921',
          border: '#242B35',
          accent: '#38BDF8',
          accentHover: '#0EA5E9',
          imperial: '#EF4444',
          textMuted: '#94A3B8',
          textLight: '#F1F5F9'
        }
      },
      fontFamily: {
        mono: ['ui-monospace', 'SFMono-Regular', 'Menlo', 'Monaco', 'Consolas', 'monospace'],
      }
    },
  },
  plugins: [],
}
