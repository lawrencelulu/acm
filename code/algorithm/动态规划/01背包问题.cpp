/**
01背包问题
输入
5 8
3 5 1 2 2
4 5 2 1 3
输出
10
*/

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 100;
const int maxv = 1000;

int w[maxn], c[maxn], dp[maxv]; // w重量 c价值
int main() {
    freopen("input.txt", "r", stdin);
    int n, V;
    scanf("%d %d", &n, &V);
    for (int i = 0; i < n; i++)
        scanf("%d", &w[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);
    //边界
    for(int v = 0; v <= V; v++)
        dp[v] = 0;
    // 状态转移方程
    for (int i = 1; i <= n; i++){
        for(int v = V; v >= w[i]; v--){
            dp[v] = max(dp[v], dp[v-w[i]] + c[i]);
        }
    }
    int max = 0;
    for(int v = 0; v <= V; v++){
        if(dp[v] > max){
            max = dp[v];
        }
    }

    printf("%d\n", max);
    return 0;
}
