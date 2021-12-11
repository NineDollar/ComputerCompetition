//
// Created by NewUser on 2021/12/11.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int HH, MM, SS, second;
    scanf("%d:%d:%d", &HH, &MM, &SS);
    cin >> second;

    SS -= second;
    MM += SS / 60;
    SS %= 60;
    if (SS < 0) {
        MM--;
        SS += 60;
    }

    HH += MM / 60;
    MM %= 60;
    if (MM < 0) {
        HH--;
        MM += 60;
    }

    HH = (HH % 24) + 24 % 24;

    printf("%02d:%02d:%02d", HH, MM, SS);

    return 0;
}
