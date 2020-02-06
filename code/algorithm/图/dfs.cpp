/**
图的深度优先遍历
输入：
5 5
1 2
1 3
1 5
2 4
3 5
输出：
1 2 4 3 5
*/

#include<stdio.h>
const int INF = 99999999;
int n, sum, book[101], e[101][101];

void dfs(int cur){
    int j;
    printf("%d ", cur);
    // 每访问一个顶点sum+1
    sum++;
    if(sum==n) return;
    for(j=1; j<=n; j++){
        if(e[cur][j] == 1 && book[j] == 0){
            book[j] = 1;
            dfs(j);
        }
    }
    return;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    int i, j, m, a, b;
    scanf("%d %d", &n, &m);
    //初始二维矩阵
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j) e[i][j] = 0;
            else e[i][j] = INF;

    // 读入城市之间的道路
    for(i = 1; i <= m; i++){
        scanf("%d %d", &a, &b);
        e[a][b] = 1;
        e[b][a] = 1;
    }

    // 从1号城市出发
    book[1] = 1;
    dfs(1);
    return 0;
}
