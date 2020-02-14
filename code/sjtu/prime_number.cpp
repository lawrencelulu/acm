#include <cstdio>
const int maxn = 1000001;
int prime[maxn];
bool p[maxn] = {false};

void findPrime(int n){
    int num = 0;
    for(int i = 2; i < maxn; i++){
        if(p[i] == false){
            prime[num++] = i;
            if(num >= n) break;
            for(int j = i + i; j < maxn; j += i){
                p[j] = true;
            }
        }
    }
}

int main(){
    int n;
    freopen("input.txt", "r", stdin);
    while(scanf("%d", &n) != EOF){
        findPrime(n);
        printf("%d\n", prime[n - 1]);
    }
}
