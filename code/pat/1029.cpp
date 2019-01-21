#include <iostream>
using namespace std;

int main()
{
    string s1, s2, res;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        if(s2.find(s1[i]) == string::npos && res.find(toupper(s1[i])) == string::npos)
            res += toupper(s1[i]);
    }
    cout << res << endl;
    return 0;
}
