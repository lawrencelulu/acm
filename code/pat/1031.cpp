#include <iostream>
using namespace std;

bool isValid(string id_num){
    int sum = 0;
    int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int b[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};

    for(int i = 0; i < 17; i++){
        if(id_num[i] < '0' || id_num[i] > '9') return false;
        sum += (id_num[i] - '0') * a[i];
    }
    int temp = (id_num[17] == 'X') ? 10 : (id_num[17] - '0');
    return b[sum%11] == temp;
}

int main()
{
    int N, flag = 0;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(!isValid(s)){
            cout << s << endl;
            flag = 1;
        }
    }
    if (flag == 0) cout << "All passed";
    return 0;
}

