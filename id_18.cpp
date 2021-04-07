/*************************************************************************
	> File Name: id_18.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 01 Feb 2021 11:44:21 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[20][20];

int main() {
    n = 15;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> num[i][j];
        }
    }
    /*
    int ans = 0;
    for (int i = 2; i<= n; i++) {
        for (int j = 1; j <= i; j++) {
            num[i][j] += max(num[i - 1][j - 1], num[i - 1][j]);
            ans = max(ans, num[i][j]);
        }
    }
    cout << ans << endl;
    */
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            num[i][j] += max(num[i + 1][j], num[i + 1][j + 1]);
        }
    }
    cout << num[1][1] << endl;
    return 0;
}
