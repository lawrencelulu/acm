#include <stdio.h>

int main()
{
    char *a = "I love China!";
    int n;
    scanf("%d", &n);
    if(n >= 0 && n < 13){
        a = a + n;
        printf("%s\n", a);
    }
    return 0;
}
