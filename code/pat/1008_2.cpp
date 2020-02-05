#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int cnt[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &cnt[i]);
    }
    M %= N;
    if(M != 0){
        reverse(cnt, cnt + N);
        reverse(cnt, cnt + M);
        reverse(cnt + M, cnt + N);
    }
    for(int i = 0; i < N; i++){
        printf("%d", cnt[i]);
        if(i < N - 1) printf(" ");
    }
    return 0;
}
