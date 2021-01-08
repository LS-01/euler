/*************************************************************************
	> File Name: id_14.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 11:06:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long func(long long n) {
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return func(n / 2) + 1;
    }
    return func(3 * n + 1) + 1;
}

int main() {
    long long ans = 1;
    for (int i = 1; i <= 1000000; i++) {
        if (func(ans) < func(i)) {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
