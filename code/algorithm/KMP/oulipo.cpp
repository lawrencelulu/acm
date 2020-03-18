/*
oulipo
输入：
3
BAPC
BAPC
AZA
AZAZAZA
VERDI
AVERDXIVYERDIAN
输出：
1
3
0
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
const int MAXM = 10000;

int nextTable[MAXM];
int pattern[MAXM];
int text[MAXM];

void GetNextTable(string pattern){
    int m = pattern.size();
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

int KMP(string text, string pattern){
    GetNextTable(pattern);
    int n = text.size();
    int m = pattern.size();
    int i = 0;
    int j = 0;
    int number = 0;
    while(i < n){
        if(j == -1 || text[i] == pattern[j]){
            i++;
            j++;
        } else {
            j = nextTable[j];
        }
        if(j == m){
            number++;
            j = nextTable[j];
        }
    }
    return number;
}
int main() {
    freopen("input.txt", "r", stdin);
    int caseNumber;
    cin >> caseNumber;
    while(caseNumber--){
        string pattern, text;
        cin >> pattern >> text;
        cout << KMP(text, pattern) <<endl;
    }
    return 0;
}

