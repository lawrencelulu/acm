#include <iostream>
using namespace std;

int main() {
  int N, cnt_a = 0, cnt_b = 0, action_a = 0, say_a = 0, action_b = 0, say_b = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> say_a >> action_a >> say_b >> action_b;
    int count_say = say_a + say_b;
    if(count_say == action_a && count_say != action_b) {
      cnt_b++;
    } else if(count_say != action_a && count_say == action_b) {
      cnt_a++;
    }
  }
  cout << cnt_a << " " << cnt_b << endl;
  return 0;
}
