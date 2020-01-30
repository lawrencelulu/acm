#include <cstdio>
#include <cstring>
using namespace std;
const int MAXN = 100010;
char str[MAXN];
int LeftNumP[MAXN] = {0};

int main()
{
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(i > 0){
            LeftNumP[i] = LeftNumP[i-1];
        }
        if(str[i] == 'P'){
            LeftNumP[i]++;
        }
    }
    int ans = 0,RightNumT=0;
    for(int i = len - 1; i >= 0; i--){
        if(str[i] == 'T'){
            RightNumT++;
        } else if(str[i] == 'A'){
            ans += LeftNumP[i] * RightNumT;
        }
    }
    printf("%d\n", ans);
    return 0;
}
