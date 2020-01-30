#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    string str = "abcd";
//    for(int i = 0; i < str.length(); i++){
//        printf("%c", str[i]);
//    }
//    printf("%s\n", str.c_str());
    for(string::iterator it = str.begin(); it != str.end(); it++){
        printf("%c", *it);
    }
    return 0;
}

