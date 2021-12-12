#include<bits/stdc++.h>

using namespace std;
const int maxn = 1000;
const int inf = 1000000;
int a[maxn + 5][maxn + 5], f[maxn + 5][maxn + 5];
int n;

int main() {

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            f[i][j] = -inf;
        }
    }
    f[1][1] = a[1][1];
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            f[i][j] = max(f[i - 1][j], f[i - 1][j - 1]) + a[i][j];
        }
    }
    int ans = f[n][1];
    for (int i = 2; i <= n; ++i) {
        ans = max(ans, f[n][i]);
    }
    printf("%d\n", ans);
    return 0;
}
