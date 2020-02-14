/*
Day of Week
输入
21 December 2012
5 January 2013
输出
Friday
Saturday
*/

#include <cstdio>
#include <cstring>
using namespace std;

char monthName[13][20] =
{
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};
char weekName[7][20] =
{
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};
int month[13][2] = {
    {0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30},
    {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}
};
bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDays(int d1, int m1, int y1, int d2, int m2, int y2){
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
    return ans;
}
int main()
{
//    freopen("input.txt", "r", stdin);
    int y, m, d;
    char  s[20];
    while(~scanf("%d %s %d", &d, &s, &y))
    {
       for(m = 1; m <= 12; m++){
            if(strcmp(monthName[m], s) == 0)
                break;
       }
       int days = getDays(1, 1, 1, d, m, y);
       puts(weekName[days % 7]);
    }
    return 0;
}
