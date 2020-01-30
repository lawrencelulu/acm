#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp[20];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

int main()
{
    char a[20], b[20], c[20];
    gets(a);
    gets(b);
    gets(c);
    if(strcmp(a, b)>0) {
        swap(a, b);
    }
    if(strcmp(a, c)>0) {
        swap(a, c);
    }
    if(strcmp(b, c)>0){
        swap(b, c);
    }
    puts(a);
    puts(b);
    puts(c);
    return 0;
}

