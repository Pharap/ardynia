(window.webpackJsonp=window.webpackJsonp||[]).push([[6],{143:function(e,t,a){"use strict";a.r(t);var n=a(0),r=a.n(n),i=a(147),o=a(155);t.default=function(){return r.a.createElement(o.a,null,r.a.createElement("h1",null,"Hi from the second page"),r.a.createElement("p",null,"Welcome to page 2"),r.a.createElement(i.Link,{to:"/"},"Go back to the homepage"))}},147:function(e,t,a){"use strict";a.r(t),a.d(t,"graphql",function(){return y}),a.d(t,"StaticQueryContext",function(){return p}),a.d(t,"StaticQuery",function(){return f});var n=a(0),r=a.n(n),i=a(8),o=a.n(i),c=a(146),u=a.n(c);a.d(t,"Link",function(){return u.a}),a.d(t,"withPrefix",function(){return c.withPrefix}),a.d(t,"navigate",function(){return c.navigate}),a.d(t,"push",function(){return c.push}),a.d(t,"replace",function(){return c.replace}),a.d(t,"navigateTo",function(){return c.navigateTo});var l=a(34);a.d(t,"waitForRouteChange",function(){return l.c});var s=a(148),d=a.n(s);a.d(t,"PageRenderer",function(){return d.a});var m=a(35);a.d(t,"parsePath",function(){return m.a});var p=r.a.createContext({}),f=function(e){return r.a.createElement(p.Consumer,null,function(t){return e.data||t[e.query]&&t[e.query].data?(e.render||e.children)(e.data?e.data.data:t[e.query].data):r.a.createElement("div",null,"Loading (StaticQuery)")})};function y(){throw new Error("It appears like Gatsby is misconfigured. Gatsby related `graphql` calls are supposed to only be evaluated at compile time, and then compiled away,. Unfortunately, something went wrong and the query was left in the compiled code.\n\n.Unless your site has a complex or custom babel/Gatsby configuration this is likely a bug in Gatsby.")}f.propTypes={data:o.a.object,query:o.a.string.isRequired,render:o.a.func,children:o.a.func}},148:function(e,t,a){var n;e.exports=(n=a(150))&&n.default||n},149:function(e){e.exports={data:{site:{siteMetadata:{title:"Ardynia",keywords:"ArduBoy, game, zelda style, adventure",description:"An adventure game for the ArduBoy in the style of Zelda",twitterHandle:"@mattegreer"}}}}},150:function(e,t,a){"use strict";a.r(t);var n=a(0),r=a.n(n),i=a(8),o=a.n(i),c=a(36),u=a(1),l=function(e){var t=e.location,a=u.default.getResourcesForPathname(t.pathname);return r.a.createElement(c.a,{location:t,pageResources:a})};l.propTypes={location:o.a.shape({pathname:o.a.string.isRequired}).isRequired},t.default=l},151:function(e,t,a){},153:function(e,t,a){},155:function(e,t,a){"use strict";var n=a(149),r=a(0),i=a.n(r),o=a(156),c=a.n(o),u=a(8),l=a.n(u),s=a(157),d=a.n(s),m=a(147),p=(a(50),a(151),["updates","contact"]),f=function(e){return e.siteTitle,i.a.createElement("nav",{className:"header"},i.a.createElement("ul",null,i.a.createElement("li",null,i.a.createElement(m.Link,{to:"/"},"home")),p.map(function(e){return i.a.createElement("li",null,i.a.createElement(m.Link,{to:"/"+e},e))})))},y=(a(153),function(e){var t=e.className,a=e.children,r=c()("layout",t);return i.a.createElement(m.StaticQuery,{query:"2840028964",render:function(e){return i.a.createElement(i.a.Fragment,null,i.a.createElement(d.a,{title:e.site.siteMetadata.title,meta:[{name:"description",content:e.site.siteMetadata.title},{name:"keywords",content:e.site.siteMetadata.keywords},{name:"twitter:card",content:"summary"},{name:"twitter:site",content:e.site.siteMetadata.twitterHandle},{name:"twitter:title",content:e.site.siteMetadata.title},{name:"twitter:description",content:e.site.siteMetadata.description},{name:"twitter:image",content:"http://www.ardynia.com/title.png"},{name:"og:title",content:e.site.siteMetadata.title},{name:"og:type",content:"website"},{name:"og:url",content:"http://www.ardynia.com"},{name:"og:description",content:e.site.siteMetadata.description},{name:"og:image",content:"http://www.ardynia.com/title.png"},{name:"og:title",content:e.site.siteMetadata.title}]},i.a.createElement("html",{lang:"en"})),i.a.createElement(f,{siteTitle:e.site.siteMetadata.title}),i.a.createElement("div",{className:"layoutContainer"},i.a.createElement("div",{className:r},a)))},data:n})});y.propTypes={children:l.a.node.isRequired},t.a=y}}]);
//# sourceMappingURL=component---src-pages-page-2-js-c7745a21b8ada3a79830.js.map