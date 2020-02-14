/**
codeup 2086
输入
5
-3 9 -2 5 -4
3
-2 -3 -1
0
输出
12 9 5
0 -2 -1
*/

#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 1000;

int main() {
//    freopen("input.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) != EOF){
        if(n <= 0) continue;
        int A[maxn] = {0}, dp[maxn] = {0};
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);
        //边界
        dp[0] = A[0];
        //dp[i]存放以A[i]结尾的连续序列的最大和，需要遍历i得到最大的才是结果
        for (int i = 1; i < n; i++)
            dp[i] = max(A[i], A[i] + dp[i-1]);
        int k = 0;
        for(int i = 1; i < n; i++)
            if(dp[i] > dp[k])
                k = i;
        int sum = 0, _k = k;
        while(sum < dp[k]){
            sum += A[_k];
            _k--;
        }
        if(dp[k] >= 0)
            printf("%d %d %d\n", dp[k], A[_k+1], A[k]);
        else
            printf("0 %d %d\n", A[0], A[n-1]);
    }
    return 0;
}
