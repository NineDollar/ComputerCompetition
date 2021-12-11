//
// Created by NewUser on 2021/12/11.
//
#include "bits/stdc++.h"

using namespace std;

int main() {
    string str1, str2;
    set<char> set1;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); ++i) {
        set1.insert(str1.at(i));
    }
    for (int i = 0; i < str2.size(); ++i) {
        if (set1.find(str2.at(i)) == set1.end()) {
            cout << 'N';
        } else{
            cout << 'Y';
        }
    }
    return 0;
}
