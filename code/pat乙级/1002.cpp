#include <stdio.h>

int main() {
    char s;
    int sum = 0, t, cnt = 1;
    char *str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while ((s=getchar()) != '\n'){
        sum += s - '0';
    }
    t = sum;
    while(t > 9) {
        t /= 10;
        cnt *= 10;
    }

    while(cnt > 0) {
        printf("%s", str[sum / cnt]);
        if (cnt > 9) printf(" ");
        sum = sum % cnt;
        cnt /= 10;
    }
    return 0;
}
