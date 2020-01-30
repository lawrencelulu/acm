#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int *p1 = &a, *p2 = &b, *p3=&c;
    if(*p1 < *p2) {
        swap(p1, p2);
    }
    if(*p1 < *p3) {
        swap(p1, p3);
    }
    if(*p2 < *p3) {
        swap(p2, p3);
    }
    printf("%d %d %d\n", *p1, *p2, *p3);
    return 0;
}
