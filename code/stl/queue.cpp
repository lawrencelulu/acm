#include <iostream>
#include <queue>
#include <list>

using namespace std;
int main()
{
    queue<int> q;
    queue<int, list<int>> q2;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl; //对头元素
    cout << q.back() << endl; //队尾元素
    while(!q.empty()){
        cout << q.front() << endl; // 队列头部元素
        q.pop(); //队列出队
    }
    return 0;
}
