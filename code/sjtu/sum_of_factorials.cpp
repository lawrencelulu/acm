/*
https://www.nowcoder.com/practice/42cb1c7f7344466b8cb1710cb12d06b1?tpId=62&tqId=29456&tPage=1&rp=1&ru=/ta/sju-kaoyan
*/

#include <stdio.h>
int main() {
//    freopen("input.txt", "r", stdin);
    int fac[11], n;
    fac[0] = 1;
    for(int i = 1; i <= 10; i++){
        fac[i] = fac[i-1] * i;
    }
    while(~scanf("%d", &n)){
        for(int i = 10; i > 0; i--){
            if(n >= fac[i])
                n -= fac[i];
        }

        if(n > 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
