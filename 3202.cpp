#include "bits/stdc++.h"

using namespace std;

using ll = long long;

int lpf(int num1, int num2) {
    if (num2>num1){
        swap(num1,num2);
    }
    for (int i = 2; i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int N, num,num1,num2,temp;
    ll result=0;
    vector<int> nums;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        nums.emplace_back(num);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            num1 = nums.at(i);
            num2 = nums.at(j);
            while (true) {
                temp = lpf(num1,num2);
                if(temp != 1){
                    result += temp;
                    result %= 1000000007;
                    num1 /= temp;
                    num2 /= temp;
                } else{
                    break;
                }
            }
        }
    }
    cout << result;
    return 0;
}