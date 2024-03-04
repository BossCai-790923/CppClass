#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {

    bitset<8> bits("11111010");

    cout << "bits: " << bits << endl;

    cout << "Number of 1: " << bits.count() << endl;

    bits.flip(2); // flip the bit at index 2

    cout << "bits: " << bits << endl;

    cout << "Number of 1: " << bits.count() << endl;


    // set 0th digit, which is 1st.
    // set means "put 1"
    bits.set(0);
    cout << bits << endl; // 11111111


    // set 1st digit, which is 2nd
    // reset means, "put 0"
    bits.reset(1);
    cout << bits << endl; // 11111101

    // tell me the ith digit, whether it is 0 or 1
    for(int i = 0; i < 8; i++)
    cout << "The " << i << " digit is: " << bits.test(i) << endl;








    return 0;
}