//
// Created by NewUser on 2021/12/11.
//
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

using ull = unsigned long long;  //取别名

ull getLength(const string &str) {
    ull size = 0;
    for (int i = 0; i < str.size(); ++i) {
        size *= 26;
        size += str.at(i) - 'A' + 1;
    }
    return size;
}

int main() {
    string str1, str2;
    ull str1Size, str2Size;
    cin >> str1 >> str2;
    str1Size = getLength(str1);
    str2Size = getLength(str2);
    cout << (str1Size == str2Size ? 0 : max(str1Size,str2Size)-min(str1Size,str2Size)-1)<<endl;
    return 0;
}
