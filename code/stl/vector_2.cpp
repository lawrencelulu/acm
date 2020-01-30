#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> vi;
    for(int i = 0; i < 5; i++){
        vi.push_back(i + 1);
    }
//    vector<int>::iterator it = vi.begin();
//    for(int i = 0; i < 5; i++){
//        printf("%d ", *(it + i));
//    }
//    for(vector<int>::iterator it = vi.begin(); it != vi.end(); it++){
//        printf("%d ", *it);
//    }
//    vi.pop_back();
    vi.insert(vi.begin()+2, -1);
    for(int i = 0; i < vi.size(); i++){
        printf("%d ", vi[i]);
    }
//    printf("%d\n", vi.size());
//    vi.clear();
//    printf("%d\n", vi.size());
    return 0;
}
