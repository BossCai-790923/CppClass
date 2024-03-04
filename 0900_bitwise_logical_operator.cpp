#include <bits/stdc++.h>
#define ll long long
using namespace std;


int i = 1;      // 00....00001      -> 31 '0' and 1 '1'
int j = -1;     // 11....11111      -> 32 '1'

/*

1) when you see 1st digit is 1, you know it is negative
2) if it is negative, how do you know what number it is? 
   You just reverse all digit, and plus 1 (取反加1), then you know its positive number.
      11....11111
   -> 00....00000
   -> 00....00001   -> 1 
   -> so the original number is -1

*/


void and_example() {
    int a = i & j;    // bitwise and -> 00....00001
    cout << a << endl;
}


void or_example() {
    int a = i | j;    // bitwise or -> 11....11111
    cout << a << endl;
}

void xor_example() {

    /*
    xor 
    1 ^ 0 -> 1
    0 ^ 1 -> 1
    0 ^ 0 -> 0
    1 ^ 1 -> 0
    */

    int a = i ^ j;   

    /*
    00....000001
    11....111111
    -----------------
    11....111110

 -> 00....000001
 -> 00....000010  -> 2
 -> line 50 the number -2
    
    */

    cout << a << endl;  // -2
}




void not_example() {
    int a = ~i;    // ~ inverts all bits, so a is 11....1111110 which is -2
    cout << a << endl;
}

int main() {

    and_example();
    or_example();
    xor_example();
    not_example();

    return 0;
}