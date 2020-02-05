/*
*/

#include <cstdio>
#include <math.h>
const int maxn = 100010;
int prime[maxn], pNum = 0;
bool p[maxn] = {0}; // i为素数 p[i]为false
//
//bool isPrime(int n){
//    if(n <= 1) return false;
//    for(int i = 2; i * i <= n; i++){
//        if(n % i == 0) return false;
//    }
//    return true;
//}
// 筛数法获取素数表
void findPrime(){
    for(int i = 2; i < maxn; i++){
        if(p[i] == false){
            prime[pNum++] = i;
            for(int j = i + i; j < maxn; j += i){
                p[j] = true;
            }
        }
    }
}

struct factor {
    int x;
    int cnt;
} fac[10];

int main()
{
//    freopen("input.txt", "r", stdin);
    findPrime();
    int n, num = 0;
    scanf("%d", &n);
    if(n == 1) printf("1 = 1");
    else {
        printf("%d = ", n);
        int sqr = (int)sqrt(1.0 * n);
        for(int i = 0; i < pNum && prime[i] <= sqr; i++){
            if(n % prime[i] == 0){
                fac[num].x = prime[i];
                fac[num].cnt = 0;
                while(n % prime[i] == 0){
                    fac[num].cnt++;
                    n /= prime[i];
                }
                num++;
            }
            if(n==1) break;
        }
        if(n != 1){
            fac[num].x = n;
            fac[num].cnt = 1;
        }
        for(int i = 0; i < num; i++){
            if(i > 0) printf("*");
            printf("%d", fac[i].x);
            if(fac[i].cnt > 1){
                printf("^%d", fac[i].cnt);
            }
        }
    }
    return 0;
}
