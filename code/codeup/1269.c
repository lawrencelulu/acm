#include <stdio.h>

int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    int *p1 = &a, *p2 = &b;
    if( *p1 > *p2) {
        printf("%d %d\n", *p1, *p2);
    } else {
        printf("%d %d\n", *p2, *p1);
    }
    return 0;
}
