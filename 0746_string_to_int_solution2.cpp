#include <bits/stdc++.h>
using namespace std;


int main() {

    string s = "11 aa";
    int i;

    stringstream ss;

    /*
    cin >> i;
    cout << i;
    */

    ss << s;
    ss >> i;

    printf("%d", i);


    return 0;
}