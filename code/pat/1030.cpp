#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, res = 0;
    long long p;
    cin >> N >> p;
    vector<int> v(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        for(int j = i + res; j < N; j++){
            if(v[j] <= v[i] * p){
                int temp = j - i + 1;
                if(temp > res)
                    res = temp;
            } else {
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}