#include <iostream>
using namespace std;
int main()
{
    int N;
    long long int a, b, c;
    cin >> N;
    for(int i = 1; i <= N; i++){
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i, a + b > c ? "true" : "false");
    }
    return 0;
}
