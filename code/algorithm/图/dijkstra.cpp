/**
最短路径 Dijkstra算法

输入
6 9
1 2 1
1 3 12
2 3 9
2 4 3
3 5 5
4 3 4
4 5 13
4 6 15
5 6 4
输出
0 1 8 4 13 17
*/

#include<stdio.h>
const int INF = 99999999;
int main()
{
    // freopen("input.txt", "r", stdin);
    int e[10][10], book[10], dis[10];
    int i, j, n, m, t1, t2, t3, u, v, min;
    scanf("%d %d", &n, &m);
    //初始二维矩阵
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j) e[i][j] = 0;
            else e[i][j] = INF;
    for(i = 1; i <= m; i++){
        scanf("%d %d %d", &t1, &t2, &t3);
        e[t1][t2] = t3;
    }
    // 初始化dis数组
    for(i = 1; i <= n; i++)
        dis[i] = e[1][i];
    // 初始化book数组
    for(i = 1; i <= n; i++)
        book[i] = 0;
    book[1] = 1;
    for(i = 1; i <= n - 1; i++)
    {
        min = INF;
        for(j = 1; j <= n; j++)
        {
            if(book[j] == 0 && dis[j] < min)
            {
                min = dis[j];
                u = j;
            }
        }
        book[u] = 1;
        for(v=1; v <= n; v++){
            if(e[u][v] < INF){
                if(dis[v] > dis[u] + e[u][v])
                    dis[v] = dis[u] + e[u][v];
            }
        }
    }
    // 输出最终结果
    for(i = 1; i <= n; i++)
        printf("%d ", dis[i]);
    return 0;
}
