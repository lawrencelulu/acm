#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
  int a[26] = {0};
  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++)
    s[i] = tolower(s[i]);

  for (int i = 0; i < s.length(); i++)
    if(islower(s[i])) a[s[i] - 'a']++;

  int max = a[0], t = 0;
  for(int i = 0; i < 26; i++){
    if(a[i] > max){
      max = a[i];
      t = i;
    }
  }
  printf("%c %d\n", t + 'a', max);
  return 0;
}
