//
// Created by NewUser on 2021/12/11.
//
#include "bits/stdc++.h"
#include "iostream"

using namespace std;
using ll = long long;

ll gcd(ll, ll);

ll ksc(ll, ll,ll base = 1000000007);

int main() {
    int N, num;
    ll result = 1;
    vector<int> nums;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        nums.emplace_back(num);
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            result = ksc(result, gcd(nums.at(i), nums.at(j)));
        }
    }
    cout << result;
    return 0;
}

ll ksc(ll x, ll y, ll base) {
    ll res = 0;
    while (y) {
        if (y & 1) {  //模仿二进制
            res = (res + x) % base;
        }
        x = (x << 1) % base;
        y >>= 1;
    }
    return res;
}

ll gcd(ll num1, ll num2) {
    ll temp;
    if (num2 > num1) {
        swap(num1, num2);
    }

    while ((temp = num1 % num2) != 0) {
        num1 = num2;
        num2 = temp;
    }
    return num2;
}
