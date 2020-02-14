/*
整除问题
输入
6 10
输出
1
*/

#include <stdio.h>
#include <math.h>
const int maxn = 1010;
int prime[maxn], pNum = 0;
bool p[maxn] = {false}; // i为素数 p[i]为false, 否则为true
int aFac[maxn], nFac[maxn];

//int calN(int n){
//    int sum = 1;
//    while(n > 1){
//        sum *= n;
//        n--;
//    }
//    return sum;
//}

void find_prime(){
    for(int i = 2; i < maxn; i++){
        if(p[i] == false){
            prime[pNum++] = i;
            for(int j = 2 * i; j < maxn; j += i)
                p[j] = true;
        }
    }
}

void get_nfac(int n){
    int sqr= (int)sqr(1.0 * n);
    for(int i = 0; i < pNum && prime[i] <= sqr; i++){
        while(n % prime[i] == 0){
            nFac[prime[i]]++;
            n /= prime[i];
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n, a, max = 1;
    scanf("%d%d", &n, &a);
//    int ans = calN(n);
    find_prime();
    printf("%d\n", max);
    return 0;
}
