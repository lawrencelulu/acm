# tolower函数 与 toupper函数

## tolower()
> 把字符转换成小写字母,非字母字符不做出处理。

```cpp
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str = "THIS IS A STRING";
    for (int i=0; i <str.size(); i++)
       str[i] = tolower(str[i]);//把大写全部转为小写
    cout<<str<<endl;
    return 0;
}
```

## toupper()
> 将小写英文字母 转换为大写英文字母
