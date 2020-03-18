/*
http://acm.hdu.edu.cn/showproblem.php?pid=2191
输入
1
8 2
2 100 4
4 100 2
输出
400
*/

#include <stdio.h>
#include <string.h>
#include <algorithm>
#define INF 9999999
using namespace std;

int dp[110];
struct coin {
    int w;
    int v;
    int num;
} list[110];

int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--){
        int m, n;
        memset(dp, 0, sizeof(dp));
        scanf("%d%d", &m, &n);
        for(int i = 1; i <= n; i++){
            scanf("%d%d%d", &list[i].v, &list[i].w, &list[i].num);
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= list[i].num; j++){
               for(int k = m; k >= list[i].v; k--){
                    dp[k] = max(dp[k], dp[k - list[i].v] + list[i].w);
               }
            }
        }
        printf("%d\n", dp[m]);
    }
    return 0;
}

