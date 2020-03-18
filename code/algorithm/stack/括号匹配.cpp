/*
括号匹配
输入
)(rttyy())sss)(
输出：
)(rttyy())sss)(
?            ?$
*/

#include <stdio.h>
#include <stack>
#include <string.h>
#include <iostream>
using namespace std;

stack<char> st;
int main() {
    freopen("input.txt", "r", stdin);
    string str;
    while(cin >> str){
        string ant(str.size(), ' ');
        for(int i = 0; i <str.size(); i++){
            if(str[i] == '('){
                st.push(i);
            } else if(str[i] == ')'){
                if(!st.empty()){
                    st.pop();
                } else {
                    ant[i] = '?';
                }
            }
        }
        while(!st.empty()){
            ant[st.top()] = '$';
            st.pop();
        }
        cout << str << endl;
        cout << ant << endl;
    }
    return 0;
}
