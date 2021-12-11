//
// Created by NewUser on 2021/12/11.
//
#include "bits/stdc++.h"
using namespace std;

int main(){
    int HH,MM,SS,second,temp;
    scanf("%d:%d:%d", &HH, &MM, &SS);
    scanf("%d", &second);

    SS+=second;
    MM += SS/60;
    SS %=60;

    HH += MM/60;
    MM %= 60;

    HH %= 24;
    printf("%02d:%02d:%02d", HH, MM, SS);
    return 0;
}
