#include <stdio.h>
#include <string.h>
#define max 100

int convertStrToInt(char x[]){
    int n = strlen(x);
    int res = 0;
    for(int i = 0; i < n; i++){
        if(x[i] >= '0' && x[i] <= '9'){
            res = res * 10 + (x[i] - '0');
        }
    }
    if(x[0] == '-') {
        res = -res;
    }
    return res;
}
int main()
{
    char a[max], b[max];
    while(scanf("%s %s", a, b) != EOF){
        int r1 = convertStrToInt(a);
        int r2 = convertStrToInt(b);
        printf("%d\n", r1 + r2);
    }
    return 0;
}
