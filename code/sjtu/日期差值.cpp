/*
日期差值
输入
20110412
20110422
10000101
10010201
输出
11
397
*/

#include <stdio.h>
int month[13][2] = {
    {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30},
    {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}
};
bool isLeap(int year){
    if(year % 4 == 0 && year % 100 != 0){
        return true;
    } else if(year % 400 == 0){
        return true;
    }
    return false;
}
int main()
{
    freopen("input.txt", "r", stdin);
    int t1, t2, y1, y2, m1, m2, d1, d2;
    while(~scanf("%d%d", &t1, &t2)){
        if(t1 > t2){
            int temp = t1;
            t1 = t2;
            t2 = temp;
        }

        y1 = t1 / 10000;
        y2 = t2 / 10000;
        m1 = t1 % 10000 / 100;
        m2 = t2 % 10000 / 100;
        d1 = t1 % 100;
        d2 = t2 % 100;

        int ans = 1;
        while(y1 < y2 || m1 < m2 || d1 < d2){
            d1++;
            if(d1 == month[m1][isLeap(y1)] + 1){
                m1++;
                d1 = 1;
            }
            if(m1 == 13){
                y1++;
                m1 = 1;
            }
            ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
