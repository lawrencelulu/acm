/*
https://www.nowcoder.com/practice/c54775799f634c72b447ef31eb36e975?tpId=62&tqId=29466&tPage=1&ru=/kaoyan/retest/2002&qru=/ta/sju-kaoyan/question-ranking
*/

#include <stdio.h>
#include <stack>
using namespace std;

int main() {
//    freopen("input.txt", "r", stdin);
    int n, temp;
    stack<int> st;
    while(~scanf("%d", &n)){
        for(int i = 0; i < n; i++){
            scanf("%d", &temp);
            st.push(temp);
        }

        while(st.empty() == false){
            printf("%d ", st.top());
            st.pop();
        }
    }
    return 0;
}

