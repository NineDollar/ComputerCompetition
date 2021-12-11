//
// Created by NewUser on 2021/12/11.
//

#include "bits/stdc++.h"

using namespace std;

using ll = long long;

int gcd(int num1, int num2) {  //最大公约数
    int temp;
    if (num2 > num1) {
        swap(num1, num2);
    }
    while ((temp = num1 % num2) != 0) {
        num1 = num2;
        num2 = temp;
    }
    return num2;
}

int lcm(int num1, int num2) {  //最小公倍数
    return num1 * num2 / gcd(num1, num2);
}

int main() {
    int N, num;
    ll result = 0;
    vector<int> nums;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        nums.emplace_back(num);
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            result += lcm(nums.at(i), nums.at(j));
            result %= 1000000007;
        }
    }
    cout << result;
    return 0;
}