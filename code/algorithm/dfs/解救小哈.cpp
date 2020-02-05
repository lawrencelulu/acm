/**
解救小哈

第一行输入n, m, 表示n行m列的迷宫，
接下来输入迷宫，0表示空地，1表示障碍物
最后一行4个数，前两个为迷宫入口坐标，后两个为小哈的坐标

输入
5 4
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1 1 4 3
输出
7
*/

#include<stdio.h>
int n, m, p, q, MIN=999999;
int a[51][51], book[51][51];

void dfs(int x, int y, int step)
{
    int next[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};
    int tx, ty, k;
    if(x == p && y == q)
    {
        if(step < MIN)
            MIN = step;
        return;
    }
    for(k = 0; k <= 3; k++)
    {
        tx = x + next[k][0];
        ty = y + next[k][1];

        if(tx<1||tx>n||ty<1||ty>m)
            continue;
        if(a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            book[tx][ty] = 1;
            dfs(tx, ty, step + 1);
            book[tx][ty] = 0;
        }
    }
    return;
}
int main()
{
    int startx, starty, i, j;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d %d %d", &startx, &starty, &p, &q);
    book[startx][starty]=1;
    dfs(startx, starty, 0);
    printf("%d\n", MIN);
    return 0;
}
