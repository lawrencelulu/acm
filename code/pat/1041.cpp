#include <iostream>
using namespace std;

int main() {
  int N, M, t;
  string stu[1005][2], s1, s2;
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> s1 >> t >> s2;
    stu[t][0] = s1;
    stu[t][1] = s2;
  }
  cin >> M;
  for(int i = 0; i < M; i++) {
    cin >> t;
    cout << stu[t][0] << " " << stu[t][1] << endl;
  }
  return 0;
}
