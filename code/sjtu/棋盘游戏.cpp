#include <stdio.h>
const int N = 6;
int p, q, MIN=999999;
int a[N][N], book[N][N];
int next[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};

void dfs(int s, int c, int x, int y){
    int tx, ty;
    if(x == p && y == q){
        if(MIN > c)
            MIN = c;
        return;
    }
    for(int k = 0; k < 4; k++){
        tx = x + next[k][0];
        ty = y + next[k][1];

        if(tx<0||tx>=N||ty<0||ty>=N)
            continue;
        if(book[tx][ty] == 0)
        {
            book[tx][ty] = 1;
            int cc = s * a[tx][ty];
            dfs(cc % 4 + 1, c + cc, tx, ty);
            book[tx][ty] = 0;
        }
    }
    return;

};

int main()
{
//    freopen("input.txt", "r", stdin);
    int startx, starty;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d %d %d", &startx, &starty, &p, &q);
    book[startx][starty] = 1;
    dfs(1, 0, startx, starty);
    printf("%d\n", MIN);
    return 0;
}
