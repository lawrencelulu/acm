#include <cstdio>
const int maxn = 1000;

int main(){
    int n, temp;
    bool a[maxn] = {false};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
       scanf("%d", &temp);
       if(a[temp] == false){
           a[temp] = true;
       }
    }

    for(int i = 0; i < maxn; i++){
        if(a[i])
            printf("%d ", i);
    }
}
