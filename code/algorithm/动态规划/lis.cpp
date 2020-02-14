/**
最长不下降子序列 LIS
输入
8
1 2 3 -9 3 9 0 11
输出
6 // 1 2 3 3 9 11
*/

#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100;
int A[maxn] = {0}, dp[maxn] = {0};
int main() {
    freopen("input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);
    int ans = -1;
    for (int i = 1; i <= n; i++){
        dp[i] = 1;
        for(int j = 1; j < i; j++){
            if(A[i] >= A[j] &&(dp[j] + 1 > dp[i])){
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }

    printf("%d\n", ans);
    return 0;
}
