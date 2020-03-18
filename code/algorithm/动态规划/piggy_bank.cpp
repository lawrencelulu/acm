/*
输入
3
10 110
2
1 1
30 50
10 110
2
1 1
50 30
1 6
2
10 3
20 4
*/

#include <stdio.h>
#include <string.h>
#include <algorithm>
#define INF 9999999
using namespace std;

int dp[10010];
struct coin {
    int w;
    int v;
} list[510];

int main() {
    int T;
    freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    while(T--){
        int tmp, s, n;
        scanf("%d%d", &tmp, &s);
        s -= tmp;
        scanf("%d", &n);
        for(int i = 0; i <= s; i++){
            dp[i] = INF;
        }
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            scanf("%d%d", &list[i].w, &list[i].v);
        }
        for(int i = 1; i <= n; i++){
            for(int j = list[i].w; j <= s; j++){
                if(dp[j-list[i].w] != INF){
                    dp[j] = min(dp[j], dp[j-list[i].w] + list[i].v);
                }
            }
        }
        if(dp[s] != INF){
            printf("%d\n", dp[s]);
        } else {
            printf("This is impossible\n");
        }
    }
    return 0;
}

