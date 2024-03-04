#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*

Expression	Binary Value	Decimal Value
a	        10011101	    157
a >> 1	     1001110	    78
a >> 2	      100111	    39
a >> 3	       10011	    19

right shift is the same as a floor division by a power of two:

*/

void shift_right_example() {
    short x = SHRT_MAX; //01...1111  -> '0' and 15 '1'
    cout << x << endl;

    while(x > 0) {
        x = x >> 1;
        cout << x << endl;
    }
}

void shift_right_is_the_same_as_divide() {
    short x = SHRT_MAX;
        cout << x << endl;

    while(x > 0) {
        x /= 2;
        cout << x << endl;
    }
}


int main() {

    // shift_right_example();
    shift_right_is_the_same_as_divide();

    return 0;
}