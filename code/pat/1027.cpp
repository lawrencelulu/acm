#include <iostream>
using namespace std;

int main()
{
    int N, row=0;
    char c;
    cin >> N >> c;
    for(int i = 0; i < N; i++){
        if((2 * i * (i + 2) + 1) > N){
            row = i - 1;
            break;
        }
    }
    int layers = 2 * row + 1;
    for(int i = 0; i <= row; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < layers - 2*i; j++) cout << c;
        cout << endl;
    }
    for(int i = 1; i <= row; i++){
        for(int j = 0; j < row - i; j++) cout << " ";
        for(int j = 0; j < 2*i+1; j++) cout << c;
        cout << endl;
    }
    cout << (N - (2 * row * (row+2) + 1)) << endl;
    return 0;
}
