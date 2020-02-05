#include <cstdio>

int main()
{
    int N, a, cnt[5] = {0}, ans[5] = {0};
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &a);
        if(a % 5 == 0 && a % 2 == 0){
            cnt[0]++;
            ans[0] += a;
        }
        if(a % 5 == 1){
            cnt[1]++;
            if(cnt[1] % 2 != 0){
                ans[1] += a;
            } else {
                ans[1] -= a;
            }
        }
        if(a % 5 == 2){
            cnt[2]++;
            ans[2]++;
        }
        if(a % 5 == 3){
            cnt[3]++;
            ans[3] += a;
        }
        if(a % 5 == 4 && ans[4] < a){
            ans[4] = a;
        }
    }
    for(int i = 0; i < 5; i++){
        if(i != 0){
            printf(" ");
        }
        if(i == 3 && ans[3] != 0) {
            printf("%.1lf", (double)ans[3] / cnt[3]);
            continue;
        }

        if(ans[i] == 0){
            printf("N");
        } else {
            printf("%d", ans[i]);
        }
    }
    return 0;
}
