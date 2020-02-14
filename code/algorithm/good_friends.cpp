/*
并查集
*/

#include <cstdio>
const int N = 110;
int father[N];
bool isRoot[N];

int findFather(int x) {
    //由于x在下面的while中会变成根结点，因此先把原先的x保存一下
    int a = x;
    while (x != father[x]) {
        x = father[x]; //寻找根结点
    }
    //到这里，x存放的是根结点。下面把路径上的所有结点的father都改成根结点
    while (a != father[a]) {
        int z = a; //因为a要被father[a]覆盖，所以先保存a的值，以修改father[a]
        a = father[a]; //a回溯父亲结点
        father[z] = x; //将原先的结点a的父亲改为根结点
    }
    return x; //返回根结点
}

void Union(int a, int b) {
    int faA = findFather(a); //查找a的根结点，记为faA
    int faB = findFather(b); //查找b的根结点，记为faB
    if (faA != faB)
        father[faA] = faB; //如果不属于同一个集合，合并它们
}

void init(int n){
    for(int i = 1; i <= n; i++){
        father[i] = i;
        isRoot[i] = false;
    }
}

int main()
{
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    init(n);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        Union(a, b);
    }
    for(int i = 1; i <= n; i++){
        printf("isRoot: %d\n", findFather(i));
        isRoot[findFather(i)] = true;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += isRoot[i];
    }
    printf("%d\n", ans);
    return 0;
}
