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
  // console.log(names);
  return names;
}
module.exports = {
  title: 'Online Judge',
  description: '记录刷题的点滴',
  base: '/acm/',
  repo: 'https://github.com/lawrencelulu/acm',
  markdown: {
    config: md => {
      md.use(require('markdown-it-sup'));
      md.use(require('markdown-it-sub'));
    }
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
    sidebarDepth: 2,
    lastUpdated: 'Last Updated',
    serviceWorker: {
      updatePopup: true
    },
    sidebar: {
      '/basic/':[
        '',
        'mode',
        'factorial'
      ],
      '/pat/': generateRoutes('pat'),
      '/stl/': generateRoutes('stl'),
      '/eoj/': generateRoutes('eoj')
    },
    nav: [
      { text: 'Home', link: '/' },
      {
        text: 'C/C++',
        items: [
          { text: '基础', link: '/basic/' },
          {
            text: 'STL', link: '/stl/'
          }
        ]
      },
      { text: 'PAT', link: '/pat/' },
      { text: 'EOJ', link: '/eoj/' },
      { text: 'GitHub', link: 'https://github.com/lawrencelulu' },
    ]
  }
}
