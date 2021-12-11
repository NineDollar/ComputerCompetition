#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int hh1, mm1, ss1, hh2, mm2, ss2;
    long long second = 0;

    scanf("%d:%d:%d", &hh1, &mm1, &ss1);
    scanf("%d:%d:%d", &hh2, &mm2, &ss2);

    second = (hh2 - hh1) * 60 * 60 + (mm2 - mm1) * 60 + (ss2 - ss1);
    second = (second + 24 * 60 * 60) % (24 * 60 * 60);
    printf("%d", second);

    return 0;
}