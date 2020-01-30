#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a[10], min, max, min_index=0, max_index=0;
    for(int i = 0; i < 10; i++){
        scanf("%d", a + i);
    }
    min = max = a[0];
    for(int i = 0; i < 10; i++) {
        if(max < a[i]){
            max = a[i];
            max_index = i;
        }
        if(min > a[i]){
            min = a[i];
            min_index = i;
        }
    }
    swap(&a[0], &a[min_index]);
    swap(&a[9], &a[max_index]);
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(a + i));
    }
    return 0;
}
