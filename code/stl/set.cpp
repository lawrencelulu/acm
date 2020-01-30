#include <stdio.h>
#include <set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(100);
    st.insert(200);
    st.insert(300);
    st.insert(100);
    st.erase((st.find(100)));
    st.erase((st.find(200)));
//    for(int i = 0; i <= 3; i++){
//        st.insert(i);
//    }
//    set<int>::iterator it = st.find(2);
//    printf("%d\n", *it);
    for(set<int>::iterator it = st.begin(); it != st.end(); it++){
        printf("%d ", *it);
    }
    return 0;
}
