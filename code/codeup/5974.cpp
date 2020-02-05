#include<cstdio>
int a[30], n, k, total = 0;
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
void dfs(int index, int nowK, int sum){
    if(index > n || nowK > k) return;
    if(nowK == k){
        if(isPrime(sum)) total++;
    }
    dfs(index + 1, nowK, sum);
    if(nowK + 1 <= k){
        dfs(index + 1, nowK + 1, sum + a[index]);
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    dfs(0,0,0);
    printf("%d\n", total);
    return 0;
}



#include <iostream>
using namespace std;
int n,m,p,q,mmin=999999;
int a[51][51],book[51][51];
void dfs(int x,int y,int step)
{
    int next[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};         //分别表示向右、下、左、上走
    int tx,ty,k;
    if(x==p&&y==q)        //判断是否到达小哈位置
    {
        if(step<mmin)
            mmin=step;
        return;
    }
    for(k=0; k<=3; k++)
    {
        tx=x+next[k][0]; //计算下一位置的坐标
        ty=y+next[k][1];
        if(tx<1||tx>n||ty<1||ty>m)  //判断是否越界
            continue;
        if(a[tx][ty]==0&&book[tx][ty]==0)   //判断该点是否为障碍物或者已经在路径中
        {
            book[tx][ty]=1;        //标志这个点已经走过
            dfs(tx,ty,step+1);     //开始尝试下一个点
            book[tx][ty]=0;        //尝试结束，取消这个点的标记
        }
    }
    return;
}
int main()
{
    freopen("input.txt", "r", stdin);
    int i,j,startx,starty;
    cin>>n>>m;          //输入n行m列，并读入各点
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];
    cin>>startx>>starty>>p>>q;      //读入起点和终点坐标
    //从起点开始搜索
    book[startx][starty]=1;       //标志起点已经在路径中，防止后面重复走
    dfs(startx,starty,0);      //参数分别为起点坐标x，起点坐标y，初始步数0
    cout<<endl<<"最短路径为："<<mmin<<endl;     //输出最短步数
    return 0;
}
