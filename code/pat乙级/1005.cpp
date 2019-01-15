#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n, m, flag = 0;
    int a[1000] = {0};
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> m;
        v[i] = m;
        while (m != 1) {
            if (m % 2 != 0) m = 3 * m + 1;
            m = m / 2;
            if (a[m] == 1) break;
            a[m] = 1;
        }
    }
    sort(v.begin(), v.end(), compare);
    for(int i = 0; i < v.size(); i++) {
        if(a[v[i]] == 0){
            if (flag == 1) cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}
