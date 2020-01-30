#include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main()
{
    int n, schID, score;
    scanf("%d", &n);
    for(int i=1; i <= n; i++){
      scanf("%d %d", &schID, &score);
      school[schID] += score;
    }
    int k = 0, max = -1;
    for(int i = 1; i <= n; i++){
        if(max < school[i]){
            max = school[i];
            k = i;
        }
    }
    printf("%d %d\n", k, max);
    return 0;
}