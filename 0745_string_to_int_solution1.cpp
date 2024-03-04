#include <bits/stdc++.h>
using namespace std;


int main() {

    string s1 = "100";
    string s2 = "2.56";
    string s3 = "200 Cats";

    int i1 = stoi(s1); // 100
    int i2 = stoi(s2); // 2
    int i3 = stoi(s3); // 200

    printf("%d\n", i1);
    printf("%d\n", i2);
    printf("%d\n", i3);

    /*
    
    stoi will try its best to convert a string to an integer
    it stops when it meets a non-number character. 
    
    */

    // string s4 = "Cats 201";
    // int i4 = stoi(s4);



    return 0;
}