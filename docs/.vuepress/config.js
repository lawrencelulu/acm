const dirTree = require('directory-tree');
const path = require('path');

function generateRoutes(name){
  const names = [''];
  const files = dirTree(path.join(__dirname, '../'+name), {extensions:/\.md/});
  files.children.forEach(children => {
    if(path.parse(children.name).name !== 'readme'){
      names.push(path.parse(children.name).name)
    }
  });
  return names;
}
module.exports = {
  title: 'Online Judge',
  description: '记录刷题的点滴',
  markdown: {
    lineNumbers: true
  },
  plugins: [
    ['@vuepress/back-to-top', true],
    ['@vuepress/search', {
      searchMaxSuggestions: 10
    }],
    ['@vuepress/last-updated'],
    ['@vuepress/medium-zoom']
  ],
  themeConfig:{
    sidebar: {
      '/pat/': generateRoutes('pat'),
      '/eoj/': generateRoutes('eoj')
    },
    nav: [
      { text: 'Home', link: '/' },
      { text: 'PAT', link: '/pat/' },
      { text: 'EOJ', link: '/eoj/' },
      { text: 'GitHub', link: 'https://github.com/lawrencelulu' },
    ]
  }
}
