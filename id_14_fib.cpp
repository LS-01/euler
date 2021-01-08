/*************************************************************************
	> File Name: id_14_fib.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 11:18:32 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long num[50];

int func(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (num[n]) return num[n];
    return num[n] = func(n - 1) + func(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
