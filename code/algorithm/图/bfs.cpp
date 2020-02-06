/**
图的广度优先遍历

输入
5 5
1 2
1 3
1 5
2 4
3 5
输出
1 2 3 5 4
*/

#include<stdio.h>
const int INF = 99999999;
int main()
{
    // freopen("input.txt", "r", stdin);
    int que[10001];
    int head = 1, tail = 1; //队列初始化
    int e[101][101], book[101];
    int cur, n, m, a, b;
    int i, j;
    scanf("%d %d", &n, &m);
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
    que[tail] = 1;
    tail++;
    book[1] = 1;

    while(head < tail && tail <= n)
    {
        cur = que[head];
        for(j = 1; j <= n; j++)
        {
            if(e[cur][j] == 1 && book[j] == 0)
            {
                que[tail] = j;
                tail++;
                book[j]= 1;
            }
            if(tail > n)
            {
                break;
            }
        }
        head++; //千万不能忘记，对后面的点继续进行扩展
    }
    // tail指向最后一位的下一位
    for(i = 1; i < tail; i++)
        printf("%d ", que[i]);
    return 0;
}
