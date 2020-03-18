/*
//https://www.nowcoder.com/practice/8e29045de1c84d349b43fdb123ab586a?tpId=62&tqId=29462&tPage=1&ru=/kaoyan/retest/2002&qru=/ta/sju-kaoyan/question-ranking
*/


#include <stdio.h>
#include <string.h>
const int maxn = 1010;
int prime[maxn], num = 0;
bool mark[maxn] = { false };

void find_prime(){
    for(int i = 2; i < maxn; i++){
        if(mark[i]) continue;
        prime[num++] = i;
        for(int j = i + i; j < maxn; j += i){
            mark[j] = true;
        }
    }
}

int main()
{
    int ant[maxn]= {0}, ant1[maxn] = {0};
    int n, a;
    int ans = 999999;

//    freopen("input.txt", "r", stdin);
    find_prime();
    while(~scanf("%d%d", &n, &a)){
        for(int i = 0; i < num; i++){
            int t = n;
            while(t){ // 确定prime[i]在n中的因子数
                ant[i] += t / prime[i];
                t /= prime[i];
            }

            while(a % prime[i] == 0){
                ant1[i]++;
                a /= prime[i];
            }
            if(ant1[i] == 0) continue;
            if(ant[i] / ant1[i] < ans)
                ans = ant[i] / ant1[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}
