#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string a, b, c, d;
    char t[2];
    int pos;
    cin >> a >> b >> c >> d;
    int i;
    for(i = 0; i < a.length() && i < b.length(); i++){
        if(a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')){
            t[0] = a[i];
            break;
        }
    }
    i = i + 1;
    for(; i < a.length() && i < b.length(); i++){
        if(a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))){
            t[1] = a[i];
            break;
        }
    }
    for(int j = 0; j < c.length() && j < d.length(); j++){
        if(c[j] == d[j] && isalpha(c[j])){
            pos = j;
            break;
        }
    }
    string week[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
    cout << week[t[0] - 'A'];
    printf(" %02d:%02d", m, pos);
    return 0;
}
