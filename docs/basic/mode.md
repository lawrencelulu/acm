# 大数除法(取模、取余)

基本思想就是手动模拟除法过程

## 代码实现
```cpp
#include <iostream>
using namespace std;
int main()
{
    // 被除数A 除数B,商R, 余数R
    string A, Q;
    int B, R=0, t=0;
    cin >> A >> B;
    int len = A.length();
    t = (A[0] - '0') / B;
    if((t!=0 && len > 1) || len == 1){
        Q += '0' + t;
    }
    R = (A[0] - '0') % B;
    for(int i = 1; i < len; i++){
        t = (R * 10 + A[i] - '0') / B;
        Q += '0' + t;
        R = (R * 10 + A[i] - '0') % B;
    }
    cout << Q << " " << R << endl;
    return 0;
}
```