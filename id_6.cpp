/*************************************************************************
	> File Name: id_6.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 09:16:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int psum = 0, sump = 0;
    for (int i = 1; i <= 100; i++) {
        psum += i * i;
        sump += i;
    }
    sump *= sump;
    cout << sump - psum << endl;
    return 0;
}
