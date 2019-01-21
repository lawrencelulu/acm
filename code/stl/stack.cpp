#include <iostream>
#include <stack>
#include <list>
#include <vector>
using namespace std;
int main() {
    //可以使用list或vector作为栈的容器，默认是使用deque的。
    stack<int> s;
    stack<int, list<int>> a;
    stack<int, vector<int>> b;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << endl; //取栈项数据
        s.pop(); //将栈顶元素出栈
    }

    //栈的大小
    printf("%d %d\n", a.size(), b.size());

    if(a.empty())
        cout << "栈不为空"; // 判断栈是否为空
    return 0;
}
