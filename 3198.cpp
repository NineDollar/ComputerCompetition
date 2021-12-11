//
// Created by NewUser on 2021/12/11.
//

#include "bits/stdc++.h"
#include "iostream"

using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        switch (str.at(i)) {
            case 'a':
            case 'b':
            case 'c':
                cout << '2';
                break;
            case 'd':
            case 'e':
            case 'f':
                cout << '3';
                break;
            case 'g':
            case 'h':
            case 'i':
                cout << '4';
                break;
            case 'j':
            case 'k':
            case 'l':
                cout << '5';
                break;
            case 'm':
            case 'n':
            case 'o':
                cout << '6';
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
                cout << '7';
                break;
            case 't':
            case 'u':
            case 'v':
                cout << '8';
                break;
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                cout << '9';
                break;
        }
    }
    return 0;
}