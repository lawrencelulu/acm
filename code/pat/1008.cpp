#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    m %= n;
    if(m != 0){
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + m);
        reverse(v.begin() + m, v.end());
    }
    for(int i = 0; i < n - 1; i++)
        cout << v[i] << " ";
    cout << v[n - 1];
    return 0;
}
