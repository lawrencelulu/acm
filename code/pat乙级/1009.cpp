#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> v;
    string s;
    while(cin >> s) {
        v.push(s);
    }
    cout << "输出栈顶" << v.top();
    v.pop();

    while(!v.empty()) {
        cout << "空格" << v.top();
        v.pop();
    }
    return 0;
}
