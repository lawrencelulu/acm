#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, b;
    int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
    double a4 = 0.0;
    vector<int> v[5];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> b;
        v[b % 5].push_back(b);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(i == 0 && v[0][j] % 2 == 0) a1 += v[0][j];
            if(i == 1 && j % 2 == 0) a2 += v[1][j];
            if(i == 1 && j % 2 == 1) a2 -= v[1][j];
            if(i == 2) a3++;
            if(i == 3) a4 += v[3][j];
            if(i == 4 && v[4][j] > a5) a5 = v[4][j];
        }
    }
    for(int i = 0; i < 5; i++){
        if(i != 0) printf(" ");
        if((i != 0 && v[i].size() == 0) || (i == 0 && a1 == 0)){
            printf("N");
            continue;
        }
        if(i == 0) printf("%d", a1);
        if(i == 1) printf("%d", a2);
        if(i == 2) printf("%d", a3);
        if(i == 3) printf("%.1f", a4 / v[3].size());
        if(i == 4) printf("%d", a5);
    }
    return 0;
}
