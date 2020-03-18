#include <stdio.h>
#include <stack>
#include <string.h>
#include <cctype>
#include <iostream>
using namespace std;
int Priority(char c){
    if(c == '#'){
        return 0;
    } else if(c == '$'){
        return 1;
    } else if(c == '+' || c == '-'){
        return 2;
    } else {
        return 3;
    }
}
double GetNumber(string str, int& index){
    double number = 0;
    while(isdigit(str[index])){
        number = number * 10 + str[index] - '0';
        index++;
    }
    return number;
}

double Calculate(double x, double y, char op){
    double result = 0;
    if(op == '+'){
        result = x + y;
    } else if(op == '-'){
        result = x - y;
    } else if(op == '*'){
        result = x * y;
    } else if(op == '/'){
        result = x / y;
    }
    return result;
}
int main() {
    freopen("input.txt", "r", stdin);
    string str;
    while(getline(cin, str)){
        if(str == "0"){
            break;
        }
        int index = 0;
        stack<int> oper;
        stack<double> data;
        str += '$';
        oper.push('#');

        while(index < str.size()){
            if(str[index] == ' '){
                index++;
            } else if(isdigit(str[index])){
                data.push(GetNumber(str, index));
            } else {
                if(Priority(oper.top()) < Priority(str[index])){
                    oper.push(str[index]);
                    index++;
                } else {
                    double y = data.top();
                    data.pop();
                    double x = data.top();
                    data.pop();
                    data.push(Calculate(x, y, oper.top()));
                    oper.pop();
                }
            }
        }
        printf("%.2f\n", data.top())
    }
    return 0;
}
