/**
PAT A1003

输入
5 6 0 2
1 2 1 5 3
0 1 1
0 2 2
0 3 1
1 2 1
2 4 1
3 4 1

输出
2 4
*/

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAXV = 510;
const int INF = 99999999;

// G为邻接矩阵，weight为点权
// d[]记录最短距离，w[]记录最大点权之和，num[]记录最短路径条数
// vis[i] i点是否被访问

int n, m, st, ed;
int G[MAXV][MAXV], weight[MAXV], d[MAXV], w[MAXV], num[MAXV];
bool vis[MAXV] = {false};

void Dijkstra(int s){
    fill(d, d+MAXV, INF);
    memset(num, 0, sizeof(num));
    memset(w, 0, sizeof(w));
    d[s] = 0;
    w[s] = weight[s];
    num[s] = 1;

    for(int i = 0; i < n; i++){
        int u = -1, MIN = INF;
        for(int j = 0; j < n; j++){
            if(vis[j] == false && d[j] < MIN){
                MIN = d[j];
                u = j;
            }
        }
        if(u == -1) return;
        vis[u] = true;

        for(int v = 0; v < n; v++){
            if(vis[v] == false && G[u][v] != INF){
                if(d[u] + G[u][v] < d[v]){
                    d[v] = d[u] + G[u][v];
                    w[v] = w[u] + weight[v];
                    num[v] = num[u];
                } else if(d[u] + G[u][v] == d[v]){
                    if(w[u] + weight[v] > w[v]){
                        w[v] = w[u] + weight[v];
                    }

                    num[v] += num[u];
                }
            }
        }
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
    scanf("%d %d %d %d", &n, &m, &st, &ed);
    for(int i = 0; i < n; i++){
        scanf("%d", &weight[i]);
    }
    int u, v;
    fill(G[0], G[0] + MAXV * MAXV, INF);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &u, &v);
        scanf("%d", &G[u][v]);
        G[v][u] = G[u][v];
    }
    Dijkstra(st);
    printf("%d %d\n", num[ed], w[ed]);
    return 0;
}
