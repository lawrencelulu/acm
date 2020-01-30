#include <cstdio>
using namespace std;

int main()
{
    int n;
    int num[5];
    while(scanf("%d", &n) != EOF){
        int x = n * n;
        int cnt = -1, sum = 0;
        while(x != 0){
          cnt++;
          num[cnt] = x % 10;
          x /= 10;
        }
        for(int i = cnt - 1; i >= 0; i--){
            sum = sum * 10 + num[i];
        }
        if(sum == n) printf("Yes!\n");
        else printf("No!\n");
    }
    return 0;
}
