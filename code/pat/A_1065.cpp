/*
1. A>0, B>0, A+B>0 flag=true
2. A<0, B<0, A+B>0 flag=false
3. A+B>C flag=true
4. A+B<C flag=false
*/

#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long res = a + b;
        bool flag;
        if(a > 0 && b > 0 && res < 0) {
            flag = true;
        } else if(a < 0 && b < 0 && res > 0){
            flag = false;
        } else if(res > c){
            flag = true;
        } else {
            flag = false;
        }

        if(flag == true){
           printf("Case #%d: true\n", i + 1);
        } else {
           printf("Case #%d: false\n", i + 1);
        }
    }
    return 0;
}
