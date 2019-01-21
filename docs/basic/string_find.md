# C++中string.find()函数与string::npos
查找字符串a是否包含子串b,
不是用strA.find(strB) > 0而是strA.find(strB) != string:npos
npos 是这样定义的：
static const size_type npos = -1;
