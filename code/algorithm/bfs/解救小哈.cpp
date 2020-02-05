/**
解救小哈 BFS

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
struct note
{
    int x; // 横坐标
    int y; // 纵坐标
    int f; // 父亲在队列编号
    int s; // 步数
} que[2501]; // 地图结点不超过50 * 50
f
int main()
{
    freopen("input.txt", "r", stdin);
    int next[4][2]= {{0,1},{1,0},{0,-1},{-1,0}}; //走的方向，右下左上
    int head = 1, tail = 1, flag = 0; //队列初始化， flag用来标记是否到达终点
    int a[51][51], book[51][51];
    int p, q, tx, ty, startx, starty, i, j, k;
    scanf("%d %d", &n, &m);
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d %d %d", &startx, &starty, &p, &q);

    // 往队列插入迷宫入口坐标
    que[tail].x = startx;
    que[tail].y = starty;
    que[tail].f = 0;
    que[tail].s = 0;
    tail++;
    book[startx][starty] = 1;

    while(head < tail)
    {
        //枚举4个方向
        for(k = 0; k <= 3; k++)
        {
            tx = que[head].x + next[k][0];
            ty = que[head].y + next[k][1];

            if(tx<1||tx>n||ty<1||ty>m)
                continue;
            if(a[tx][ty] == 0 && book[tx][ty] == 0)
            {
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].f = head;
                que[tail].s = que[head].s + 1;
                tail++;
                book[tx][ty] = 0;
            }
            // 到目标终点，停止扩展，退出循环
            if(tx == p && ty == q)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
        head++; //千万不能忘记，对后面的点继续进行扩展
    }
    // tail指向最后一位的下一位
    printf("%d\n", que[tail-1].s);
    return 0;
}
