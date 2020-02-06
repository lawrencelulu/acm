/**
 城市地图 图的深度优先遍历
输入：
5 8
1 2 2
1 5 10
2 3 3
2 5 7
3 1 4
3 4 4
4 5 5
5 3 3
输出：
9
*/

#include<stdio.h>
const int INF = 99999999;
int min = 99999999;
int n, book[101], e[101][101];

void dfs(int cur, int dis){
    int j;
    if(dis > min) return;
    if(cur == n){
      if(dis<min) min = dis;
      return;
    }
    for(j=1; j<=n; j++){
        if(e[cur][j] != INF && book[j] == 0){
            book[j] = 1;
            dfs(j, dis+e[cur][j]);
            book[j] = 0;
        }
    }
    return;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    int i, j, m, a, b, c;
    scanf("%d %d", &n, &m);
    //初始二维矩阵
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j) e[i][j] = 0;
            else e[i][j] = INF;

    // 读入城市之间的道路
    for(i = 1; i <= m; i++){
        scanf("%d %d %d", &a, &b, &c);
        e[a][b] = c;
    }

    // 从1号城市出发
    book[1] = 1;
    dfs(1, 0);
    printf("%d\n", min);
    return 0;
}
