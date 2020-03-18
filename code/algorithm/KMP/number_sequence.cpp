/*
number sequence
输入：
2
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 1 3
13 5
1 2 1 2 3 1 2 3 1 3 2 1 2
1 2 3 2 1
输出：
6
-1
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
const int MAXM = 10000;
const int MAXN = 100000;

int nextTable[MAXM];
int pattern[MAXM];
int text[MAXN];

void GetNextTable(int m){
    int j = 0;
    nextTable[j] = -1;
    int i = nextTable[j];
    while(j < m){
        if(i == -1 || pattern[j] == pattern[i]){
            i++;
            j++;
            nextTable[j] = i;
        } else {
            i = nextTable[i];
        }
    }
    return;
}

int KMP(int n, int m){
    GetNextTable(m);
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(j == -1 || text[i] == pattern[j]){
            i++;
            j++;
        } else {
            j = nextTable[j];
        }
    }
    if(j == m){
        return i - j + 1;
    } else {
        return -1;
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    int caseNumber;
    cin >> caseNumber;
    while(caseNumber--){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            cin >> text[i];
        }
        for(int j = 0; j < m; j++){
            cin >> pattern[j];
        }
        cout << KMP(n, m) <<endl;
    }
}
