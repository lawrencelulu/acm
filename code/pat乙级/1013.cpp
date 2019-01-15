#include <iostream>
#include <vector>
using namespace std;
bool isprime(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}
int main()
{
    int a, b, num = 2, cnt = 0;
    vector<int> v;
    cin >> a >> b;
    while(cnt < b){
        if(isprime(num)){
            cnt++;
            if(cnt >= a)
                v.push_back(num);
        }
        num++;
    }
    cnt = 0;
    for(int i = 0; i < v.size(); i++){
        cnt++;
        if (cnt % 10 != 1) cout << " ";
        cout << v[i];
        if (cnt % 10 == 0) cout << endl;
    }
    return 0;
}