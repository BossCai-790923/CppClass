#include <bits/stdc++.h>
using namespace std;


void solution1_array_style1() {

    string str("Hello"); 

    puts("array syntax -------------------------");

    for(int i = 0; i < str.length(); i++)
        printf("str[%d] is : %c\n", i, str[i]);

    cout << endl;

}

void solution2_new_for_loop() {

    string str("Hello");

    puts("new for loop syntax --------------------");

    // for(char ch : str) {
    //     cout << ch << endl;
    // }

    // Alternative: use auto keyword
    for(auto ch : str) {
        cout << ch << endl;
    }

    // auto means: Please help decide the variable type

}

void solution3_iterator() {

    string str("Hello");

    puts("string::iterator --------------------");

    for(string::iterator it = str.begin(); it != str.end(); it++) 
        cout << *it << endl;

    /*
    1) Iterator is just like a pointer
    2) begin() : returns an iterator that points to the first character, if there is one.
    3) end() : returns an iterator that points to the position "one past the end", which is nonexistent.
    4) If string is empty, begin() returns the same iterator as end()
    5) iterator is defined inside string.cpp, belongs to string namespace, so it should be string::iterator
    */

}





int main() {

    solution1_array_style1();
    solution2_new_for_loop();
    solution3_iterator();



    return 0;
}