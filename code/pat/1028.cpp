#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, cnt = 0;
    cin >> N;
    string name, birth, max_name, max_birth = "2014/09/06", min_name, min_birth = "1814/09/06";
    for(int i = 0; i < N; i++){
        cin >> name >> birth;
        if(birth >= "1814/09/06" && birth <= "2014/09/06"){
            cnt++;
            if(birth <= max_birth){
                max_name = name;
                max_birth = birth;
            }
            if(birth >= min_birth){
                min_name = name;
                min_birth = birth;
            }
        }
    }
    cout << cnt;
    if(cnt != 0){
        cout << " " << max_name << " " << min_name << endl;
    }
    return 0;
}
