#include <bits/stdc++.h>

using namespace std;

int N, num, *numArray, **G, sum = 1;
bool *visit;
int ans = 0;

void dfs(int Index) {
    visit[Index] = true;
    cout << endl;
    for (int i = 0; i < N; ++i) {
        if (!visit[i] && G[Index][i] != 0) {
            dfs(i);
            sum++;
        }
    }
}

int main(int argc, char const *argv[]) {
    cin >> N;
    numArray = new int[N];
    visit = new bool[N];
    for (int i = 0; i < N; ++i) {
        cin >> num;
        numArray[i] = num;
    }
    for (int i = 0; i < N; ++i) {
        visit[i] = false;
    }

    G = new int *[N];
    for (int i = 0; i < N; ++i) {
        G[i] = new int[N];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            G[i][j] = 0;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i < j && numArray[i] > numArray[j]) {
                G[i][j] = G[j][i] = 1;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        if (!visit[i]) {
            dfs(i);
            ans = max(ans, sum);
            sum = 1;
        }
    }

    cout << ans;

    delete[]G;
    delete[]visit;
    delete[]numArray;
    return 0;
}
