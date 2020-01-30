#include <stdio.h>

int main()
{
    int n, data;
    while(scanf("%d", &n) != EOF){
        int c_odd = 0, c_even = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &data);
            if(data % 2 == 0) c_even++;
            else c_odd++;
        }
        if(c_even > c_odd) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

