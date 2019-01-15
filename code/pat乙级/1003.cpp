#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, p = 0, t = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        map<char, int> m; //map容器记录字符并统计个数
        for (int j = 0; j < s.size(); j++) {
            m[s[j]]++;
            if (s[j] == 'P') p = j;
            if (s[j] == 'T') t = j;
        }
        // 只能有1个P和T，P和T之间必须插入A
        // 开头A的个数 * 中间A的个数 = 末尾A的个数
        if(m['P'] == 1 && m['T'] == 1 &&m['A'] != 0 && (t-p)!= 1 && m.size() == 3 && p * (t-p-1) == s.length() - t -1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
