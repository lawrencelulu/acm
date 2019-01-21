#include <iostream>
using namespace std;
int main() {
    int n, max = 0, min = 101, score;
    cin >> n;
    string maxname, minname, maxnum, minnum, name, num;
    for(int i = 0; i < n; i++){
        cin >> name >> num >> score;
        if (max < score) {
            maxname = name;
            maxnum = num;
            max = score;
        }

        if (min > score) {
            minname = name;
            minnum = num;
            min = score;
        }
    }
    cout << maxname << " " << maxnum << endl << minname << " " << minnum;
    return 0;
}
