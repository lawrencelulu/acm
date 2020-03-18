#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
//    freopen("input.txt", "r", stdin);
    char str[1000];
    int ant[26] = {0};
    while(~scanf("%s", &str)){
        int len = strlen(str);
        for(int i = 0; i < len; i++){
            int index = str[i] - 'A';
            if(index > 26) continue;
            if(ant[index] != 0)
                ant[index]++;
            else
                ant[index] = 1;
        }
        for(int i = 0; i < 26; i++){
            printf("%c:%d\n", i + 'A', ant[i]);
        }
    }
    return 0;
}
