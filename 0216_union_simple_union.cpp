#include <bits/stdc++.h>
using namespace std;


union SimpleUnion
{
    // only one of them can be actually used
    int num;
    char alphabet;
};



int main() {

    SimpleUnion u1, u2;
    u1.num = 2100;
    u2.alphabet
    // Just like struct, union members are public.

    cout << "sizeof(u1) : " << sizeof(u1) << endl;
    cout << "sizeof(u2) : " << sizeof(u2) << endl;

    // Compiler reserves the amount of memory for a union that is consumed by the largest object.

    return 0;
}
