/*
数字反转
输入
12 34
99 1
输出
46
NO
*/

#include <stdio.h>

int reverse(int num){
    int sum = 0;
    while(num){
        sum = sum * 10 + num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    freopen("input.txt", "r", stdin);
    int a, b;
    while(~scanf("%d %d", &a, &b)){
        if(reverse(a) + reverse(b) == reverse(a + b)){
            printf("%d\n", a+b);
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
