(window.webpackJsonp=window.webpackJsonp||[]).push([[31],{182:function(t,s,a){"use strict";a.r(s);var n=a(0),p=Object(n.a)({},function(){this.$createElement;this._self._c;return this._m(0)},[function(){var t=this,s=t.$createElement,a=t._self._c||s;return a("div",{staticClass:"content"},[a("h1",{attrs:{id:"_1015-德才论"}},[a("a",{staticClass:"header-anchor",attrs:{href:"#_1015-德才论","aria-hidden":"true"}},[t._v("#")]),t._v(" 1015 德才论")]),t._v(" "),a("h2",{attrs:{id:"题目描述"}},[a("a",{staticClass:"header-anchor",attrs:{href:"#题目描述","aria-hidden":"true"}},[t._v("#")]),t._v(" 题目描述")]),t._v(" "),a("p",[t._v("宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术，苟不得圣人，君子而与之，与其得小人，不若得愚人。”")]),t._v(" "),a("p",[t._v("现给出一批考生的德才分数，请根据司马光的理论给出录取排名。")]),t._v(" "),a("p",[t._v("输入格式：\n输入第一行给出 3 个正整数，分别为：N（≤10\n​5\n​​ ），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。")]),t._v(" "),a("p",[t._v("随后 N 行，每行给出一位考生的信息，包括：准考证号 德分 才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。")]),t._v(" "),a("p",[t._v("输出格式：\n输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。")]),t._v(" "),a("p",[t._v("输入样例：")]),t._v(" "),a("div",{staticClass:"language- extra-class"},[a("pre",{pre:!0,attrs:{class:"language-text"}},[a("code",[t._v("14 60 80\n10000001 64 90\n10000002 90 60\n10000011 85 80\n10000003 85 80\n10000004 80 85\n10000005 82 77\n10000006 83 76\n10000007 90 78\n10000008 75 79\n10000009 59 90\n10000010 88 45\n10000012 80 100\n10000013 90 99\n10000014 66 60\n")])])]),a("p",[t._v("输出样例：")]),t._v(" "),a("div",{staticClass:"language- extra-class"},[a("pre",{pre:!0,attrs:{class:"language-text"}},[a("code",[t._v("12\n10000013 90 99\n10000012 80 100\n10000003 85 80\n10000011 85 80\n10000004 80 85\n10000007 90 78\n10000006 83 76\n10000005 82 77\n10000002 90 60\n10000014 66 60\n10000008 75 79\n10000001 64 90\n")])])]),a("h2",{attrs:{id:"解题思路"}},[a("a",{staticClass:"header-anchor",attrs:{href:"#解题思路","aria-hidden":"true"}},[t._v("#")]),t._v(" 解题思路")]),t._v(" "),a("p",[t._v("用结构体存储每个学生的卷考证号，德分和才分。按照四类人才分类规则对人才进行分类，用结构体数组v[4]存储四种分类，对四种分类分别用 compare 函数进行排序，最后遍历v[4]输出即可。")]),t._v(" "),a("h2",{attrs:{id:"代码实现"}},[a("a",{staticClass:"header-anchor",attrs:{href:"#代码实现","aria-hidden":"true"}},[t._v("#")]),t._v(" 代码实现")]),t._v(" "),a("div",{staticClass:"language-cpp extra-class"},[a("pre",{pre:!0,attrs:{class:"language-cpp"}},[a("code",[a("span",{pre:!0,attrs:{class:"token macro property"}},[t._v("#"),a("span",{pre:!0,attrs:{class:"token directive keyword"}},[t._v("include")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token string"}},[t._v("<iostream>")])]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token macro property"}},[t._v("#"),a("span",{pre:!0,attrs:{class:"token directive keyword"}},[t._v("include")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token string"}},[t._v("<vector>")])]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token macro property"}},[t._v("#"),a("span",{pre:!0,attrs:{class:"token directive keyword"}},[t._v("include")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token string"}},[t._v("<algorithm>")])]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("using")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("namespace")]),t._v(" std"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 人才分类要求")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v('// 1.第一类："才德全尽" -- 德分和才分均不低于此线,按照德才总分从高到低排序;')]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v('// 2.第二类："德胜才" -- 才分不到线但德分到线,按总分排序;')]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v('// 3.第三类："才德兼亡" -- 德才分均低于 H,但是德分不低于才分,按总分排序；')]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 4.第四类：其他达到最低线 L 的考生也按总分排序。")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 输出要求")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 达到最低分数线的考生人数 M，")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token comment"}},[t._v("// 当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。")]),t._v("\n\n"),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("struct")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token class-name"}},[t._v("node")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" num"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" de"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("compare")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("node stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" node stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("+")]),t._v(" stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("!=")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("+")]),t._v(" stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("return")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("+")]),t._v(" stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("+")]),t._v(" stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("else")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("!=")]),t._v(" stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("return")]),t._v(" stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">")]),t._v(" stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("else")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("return")]),t._v(" stu1"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("num "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" stu2"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("num"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("main")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n    vector"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v("node"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("4")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" N"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" L"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" H"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" total"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    cin "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" N "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" L "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" H"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    node stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    total "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("=")]),t._v(" N"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("for")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" i "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("=")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("0")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" i "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" N"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" i"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("++")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n        cin "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("num "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">>")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" L "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("||")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" L"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            total"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("--")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n            "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("continue")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">=")]),t._v(" H "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("&&")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">=")]),t._v(" H"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("0")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("push_back")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("else")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">=")]),t._v(" H "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("&&")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" H"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("1")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("push_back")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("else")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("if")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" H "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("&&")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" H "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("&&")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v(">=")]),t._v(" stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("2")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("push_back")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("else")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("3")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("push_back")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("stu"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n    cout "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<<")]),t._v(" total "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<<")]),t._v(" endl"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("for")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" i "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("=")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("0")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" i "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("4")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" i"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("++")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("sort")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),t._v("v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("begin")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("end")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" compare"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("for")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("int")]),t._v(" j "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("=")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("0")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" j "),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("<")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("size")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v(" j"),a("span",{pre:!0,attrs:{class:"token operator"}},[t._v("++")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("{")]),t._v("\n            "),a("span",{pre:!0,attrs:{class:"token function"}},[t._v("printf")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("(")]),a("span",{pre:!0,attrs:{class:"token string"}},[t._v('"%d %d %d\\n"')]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("j"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("num"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("j"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("de"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(",")]),t._v(" v"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("i"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("[")]),t._v("j"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("]")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(".")]),t._v("cai"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(")")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n        "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n    "),a("span",{pre:!0,attrs:{class:"token keyword"}},[t._v("return")]),t._v(" "),a("span",{pre:!0,attrs:{class:"token number"}},[t._v("0")]),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v(";")]),t._v("\n"),a("span",{pre:!0,attrs:{class:"token punctuation"}},[t._v("}")]),t._v("\n")])])])])}],!1,null,null,null);s.default=p.exports}}]);