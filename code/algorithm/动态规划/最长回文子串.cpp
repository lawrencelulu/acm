/*
最长回文子串
输入
PATZJUJZTACCBCC
输出
9
*/

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
const int maxn = 1010;
int dp[maxn][maxn];
char s[maxn];

int main() {
    freopen("input.txt", "r", stdin);
    gets(s);
    int len = strlen(s), ans = 1;
    memset(dp, 0, sizeof(dp));
    // 边界
    for(int i = 0; i < len; i++){
        dp[i][i] = 1;
        if(i < len - 1){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                ans = 2;
            }
        }
    }
    // 状态方程
    for(int L = 3; L <= len; L++){
        for(int i = 0; i + L - 1 < len; i++){
            int j = i + L - 1;
            if(s[i] == s[j] && dp[i+1][j-1] == 1){
                dp[i][j] = 1;
                ans = L;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
