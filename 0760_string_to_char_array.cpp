#include <bits/stdc++.h>
using namespace std;


int main() {

    string str = "Hello";

    const char* ch_arr = str.c_str(); // returns CONSTANT character array pointer

    char ch = ch_arr[0];
    printf("%c", ch);

    return 0;
}
