/*
甲喊，甲划，乙喊，乙划
规则：比划的数字等于两人喊出的数字之和, 谁就赢了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现
*/
#include <cstdio>
int main()
{
    int N, a, da, b, db, cnta = 0, cntb = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d %d %d", &a, &da, &b, &db);
        if(a + b == da && a + b != db) cntb++;
        if(a + b == db && a + b != da) cnta++;
    }
    printf("%d %d\n", cnta, cntb);
    return 0;
}
