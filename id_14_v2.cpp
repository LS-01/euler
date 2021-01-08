/*************************************************************************
	> File Name: id_14_v2.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 11:26:01 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[10000000];

int func(long long n) {
    if (n == 1) {
        return 1;
    }
    if (n < 10000000 && num[n]) {
        return num[n];
    }
    int t;
    if (n % 2 == 0) {
        t = func(n / 2) + 1;
    } else {
        t = func(3 * n + 1) + 1;
    }
    if (n < 10000000) {
        num[n] = t;
    }
    return t;
}

int main() {
    int ans = 1;
    for (int i = 2; i <= 1000000; i++) {
        if (func(ans) < func(i)) {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
