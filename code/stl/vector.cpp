#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int t;
    for (int i = 0; i < 10; i++) {
        cin >> t;
        a.push_back(t);
    }
    vector<int> b;
    b = a;
    cout << "print b: 直接赋值" << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "a.size() = " << a.size() << endl;

    cout << "print1:" << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    a.resize(11);
    cout << "a.size() = after resize(11) :" << a.size() << endl;
    cout << "print2 after resize(11):" << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    a.push_back(22);
    cout << "print3 after push_back(22):" << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    a.pop_back();
    cout << "a.size() = after pop_back() :" << a.size() << endl;
    cout << "print4 after pop_back():" << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "a.empty()?:" << a.empty() << endl;
    a.clear();
    cout << "a.size() = after a.clear() :" << a.size() << endl;
    cout << "print5 after a.clear():" << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
