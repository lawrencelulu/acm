/*
*/
#include <stdio.h>
int main()
{
//    freopen("input.txt", "r", stdin);
    double a[1010];
    while(~scanf("%lf", &a[0])){
        int num = 0;
        double b;
        char op;
        while(~scanf("%c", &op) && op != '\n'){
            scanf("%lf", &b);
            switch(op){
                case '+':
                    a[++num] = b;
                    break;
                case '-':
                    a[++num] = -b;
                    break;
                case '*':
                    a[num] *= b;
                    break;
                case '/':
                    a[num] /= b;
                    break;
            }
        }
        double res = 0;
        for(int i = 0; i <= num; i++)
           res += a[i];
        printf("%.0f\n", res);
    }
    return 0;
}
