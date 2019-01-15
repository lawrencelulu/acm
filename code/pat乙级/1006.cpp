#include <iostream>
using namespace std;

int main() {
    int n, b, s, m;
    cin >> n;
    b = n / 100;
    n = n % 100;
    if(b){
      for(int i = 0; i < b; i++){
          cout << "B";
      }
    }
    s = n / 10;
    if(s) {
        for(int i = 0; i < s; i++){
            cout << "S";
        }
    }
    m = n % 10;
    for(int i = 1; i <= m; i++){
        cout << i;
    }
    return 0;
}
