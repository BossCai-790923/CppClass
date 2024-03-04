#include <bits/stdc++.h>
#define ll long long
using namespace std;


int i = 1;      // 00....00001      -> 31 '0' and 1 '1'
int j = -1;     // 11....11111      -> 32 '1'

short x = 1;      // 00....00001      -> 15 '0' and 1 '1'
short y = -1;     // 11....11111      -> 16 '1'

/*

Expression      Binary            Decimal
a               100111            39
a << 1         1001110            78
a << 2        10011100            156
a << 3       100111000            312

a << 1 -> a * 2
a << 2 -> a * 2 * 2
...
a << n -> a * 2^n

*/

void shift_left_int_example() {

    while(i != 0) {
        i = i << 1;
        bitset<32> bsInt = bitset<32>(i);
        cout << i << " " << bsInt << endl;
    }
}
// 4 bytes, 32 bits


void shift_left_short_example() {

    while(x != 0) {
        x = x << 1;
        bitset<16> bsInt = bitset<16>(x);
        cout << x << " " << bsInt << endl;
    }
}
// 2 bytes, 16 bits


void shift_left_int_with_bitmask_example() {

    while(i != 0) {
        i = i << 1 & 255;
        cout << i << endl;
    }
}
// 2 bytes, 16 bits





/*

*/



int main() {

    // shift_left_int_example();
    shift_left_short_example();
    // shift_left_int_with_bitmask_example();


    return 0;
}