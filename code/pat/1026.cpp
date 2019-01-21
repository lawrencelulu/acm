#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;
    int c_sec = (end - start + 50) / 100;
    int hours = c_sec / 3600;
    int minutes = (c_sec - hours * 3600) / 60;
    int seconds = c_sec - hours * 3600 - minutes * 60;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
