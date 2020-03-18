#include <stdio.h>
int main() {
//    freopen("input.txt", "r", stdin);
    int n, m;
    while(~scanf("%d%d", &n, &m)){
        int x, y, p, q;
        int a[n], b[m];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        scanf("%d%d%d%d", &x, &y, &p, &q);
        int len = y - x + q - p + 2;
        int c[len];
        int k = 0;
        for(int i = x - 1; i < y; i++)
            c[k++] = a[i];
        for(int i = p - 1; i < q; i++)
            c[k++] = b[i];
        if(k % 2 == 0){
            printf("%d\n", c[k / 2 - 1]);
        } else {
            printf("%d\n", c[k / 2]);
        }
    }
    return 0;
}
