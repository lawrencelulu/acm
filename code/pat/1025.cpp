#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int data[100005], next[100005], list[100005];
    int first, n, k, temp;
    cin >> first >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0, address = first;
    while (address != -1){
        list[sum++] = address;
        address = next[address];
    }
    for(int i = 0; i < (sum - sum % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for(int i = 0; i < sum - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1\n", list[sum-1], data[list[sum-1]]);
    return 0;
}
