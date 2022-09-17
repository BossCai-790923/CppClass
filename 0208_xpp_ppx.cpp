#include <bits/stdc++.h>
using namespace std;


int main() {

    int x = 10;

    cout << x++ << endl; //10 : you use x value(10) first, then you add 1 to x

    cout << x << endl; // 11 : so here you see 11.

    cout << " ----------------------------" << endl;

    x = 10;

    cout << ++x << endl; //11 : you add 1 to x first, then use x value(11)

    cout << x << endl; // 11 : so here you see 11.

    return 0;
}