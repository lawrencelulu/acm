/**
最少转机 图的广度优先遍历
*/

#include<stdio.h>
const int INF = 99999999;
struct note
{
    int x; // 横坐标
    int s; // 步数
} que[2501]; // 地图结点不超过50 * 50
int main()
{
    // freopen("input.txt", "r", stdin);
    int head = 1, tail = 1, flag = 0; //队列初始化， flag用来标记是否到达终点
    int e[51][51], book[51];
    int cur, start, end, n, m, a, b;
    int i, j;
    // n个城市，m条航线， 起始城市start, 目标城市end
    scanf("%d %d %d %d", &n, &m, &start, &end);
    //初始二维矩阵
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j) e[i][j] = 0;
            else e[i][j] = INF;
    // 读入城市之间的航班
    for(i = 1; i <= m; i++){
        scanf("%d %d", &a, &b);
        // 这里是无向图
        e[a][b] = 1;
        e[b][a] = 1;
    }
    // 从start城市出发，将start城市加入队列
    que[tail].x = start;
    que[tail].s = 0;
    tail++;
    book[start] = 1;

    while(head < tail)
    {
        cur = que[head].x;
        for(j = 1; j <= n; j++)
        {
            // 从城市cur到城市j有航班并且城市J不在队列，则将j号城市入队
            if(e[cur][j] != INF && book[j] == 0)
            {
                que[tail].x = j;
                que[tail].s = que[head].s + 1;
                tail++;
                book[j]= 1;
            }
            // 到目标城市，停止扩展，退出循环
            if(que[tail].x == end)
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
