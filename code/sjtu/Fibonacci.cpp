#include <cstdio>

int Fibonacci(int n){
    int res;
    if(n == 0) res = 0;
    else if(n == 1){
        res = 1;
    } else {
        res = Fibonacci(n-1) + Fibonacci(n-2);
    }
    return res;
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n < 0) continue;
        printf("%d\n", Fibonacci(n));
    }
}
