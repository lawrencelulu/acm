#include <iostream>
#include <string>
using namespace std;
string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int len;

void mars_to_earth(string s) {
  int t1 = 0, t2 = 0;
  string s1 = s.substr(0, 3), s2;
  if(len > 4) s2 = s.substr(4, 3);
  for(int j = 1; j <= 12; j++){
    if(s1 == a[j] || s2 == a[j]) {
      t2 = j;
    }

    if(s1 == b[j]){
      t1 = j;
    }
  }

  cout << t1 * 13 + t2;
}

void earth_to_mars(int t){
  if(t / 13) cout << b[t / 13];
  if((t % 13) && (t / 13)) cout << ' ';
  if((t % 13) || t == 0) cout << a[t % 13];
}

int main() {
  int N;
  string s;
  cin >> N;
  getchar(); // 处理回车符
  for(int i = 0; i < N; i++){
    getline(cin, s);
    len = s.length();
    if(s[0] >= '0' && s[0] <= '9'){
      earth_to_mars(stoi(s));
    } else {
      mars_to_earth(s);
    }
    cout << endl;
  }
  return 0;
}