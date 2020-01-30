#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int v[100000];
int main() {
  int N, cnt = 0, max = 0;
  scanf("%d", &N);
  vector<int> a(N), b(N);

  for(int i = 0; i < N; i++){
    scanf("%d", &a[i]);
    b[i] = a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < N; i++){
    if(a[i] == b[i] && b[i] > max){
      v[cnt++] = b[i];
    }
    if(b[i] > max) {
      max = b[i];
    }
  }
  printf("%d\n", cnt);
  for(int i = 0; i < cnt; i++){
    if(i != 0) printf(" ");
    printf("%d", v[i]);
  }
  printf("\n");
  return 0;
}
