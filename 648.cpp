/*
 * 全队列
 */

#include<bits/stdc++.h>

using namespace std;

void Do() {
    int a[10];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        a[i] = i;
    }
    do {
        for (int i = 1; i <= n; ++i) {
            printf("%d ", a[i]);
        }
        cout << '\n';
    } while (next_permutation(a + 1, a + n + 1));  //全队列，从下标1开始
}

int main() {
    Do();
    return 0;
}