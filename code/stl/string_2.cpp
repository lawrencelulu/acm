#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Thank you for you smile";
    string str2 = "you";
    string str3 = "me";
    if(str.find(str2) != string::npos){
        cout << str.find(str2) << endl;
    }
    if(str.find(str2, 7) != string::npos){
        cout << str.find(str2, 7) << endl;
    }
    if(str.find(str3) != string::npos){
        cout << str.find(str3) << endl;
    } else {
        cout << "I Konw there is no position for me" << endl;
    }
//    for(int i = 0; i < str.length(); i++){
//        printf("%c", str[i]);
//    }
//    printf("%s\n", str.c_str());
//    for(string::iterator it = str.begin(); it != str.end(); it++){
//        printf("%c", *it);
//    }
    return 0;
}