//
// Created by NewUser on 2021/12/11.
//

#include "bits/stdc++.h"

using namespace std;

int main() {
    double a, b, c, dtx;
    double x1, x2;
    cin >> a >> b >> c;
    dtx = b * b - 4 * a * c;
    if (dtx < 0) {
        cout << "No real root";
    } else {
        x1 = (-b + sqrt( dtx)) / 2 * a;
        x2 = (-b - sqrt( dtx)) / 2 * a;
        cout << setiosflags(ios::fixed) << setprecision(4) << x1 << '\n';
        cout << setiosflags(ios::fixed) << setprecision(4) << x2;
    }
    return 0;
}
