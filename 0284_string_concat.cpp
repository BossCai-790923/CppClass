#include <bits/stdc++.h>
using namespace std;


int main() {


    string s1 = "1", s2="2", s3="3", s4="4";
    const char* cStr = " is a number";


    // Solution 1) User + ---------------
    s1 = s1 + s2; // 12
    s1 += s2; // 122
    s1 += cStr; // 122 is a number
    cout << s1 << endl; 

    // Solution 2) append() -------------

    s3.append(s4); // 34
    s3.append(cStr); // 34 is a number
    cout << s3 << endl; 


    return 0;
}