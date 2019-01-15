#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int num, de, cai;
};
int compare(node stu1, node stu2){
    if((stu1.de + stu1.cai) != (stu2.de + stu2.cai)){
        return (stu1.de + stu1.cai) > (stu2.de + stu2.cai);
    } else if (stu1.de != stu2.de) {
        return stu1.de > stu2.de;
    } else {
        return stu1.num < stu2.num;
    }
}
int main()
{
    vector<node> v[4];
    int N, L, H, total;
    cin >> N >> L >> H;
    node stu;
    total = N;
    for(int i = 0; i < N; i++){
        cin >> stu.num >> stu.de >> stu.cai;
        if(stu.de < L || stu.cai < L){
            total--;
            continue;
        }
        if(stu.de >= H && stu.cai >= H){
            v[0].push_back(stu);
        } else if(stu.de >= H && stu.cai < H){
            v[1].push_back(stu);
        } else if(stu.de < H && stu.cai < H && stu.de >= stu.cai){
            v[2].push_back(stu);
        } else {
            v[3].push_back(stu);
        }
    }
    cout << total << endl;
    for(int i = 0; i < 4; i++){
        sort(v[i].begin(), v[i].end(), compare);
        for(int j = 0; j < v[i].size(); j++){
            printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);
        }
    }
    return 0;
}

