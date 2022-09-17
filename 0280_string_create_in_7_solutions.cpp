#include <bits/stdc++.h>
using namespace std;


int main() {

    // solution 1 -------------------
    string str1("Hello");
    cout << "str1: " << str1 << endl;

    // solution 2 -------------------
    string str2 = "C++";
    cout << "str2: " << str2 << endl;



    const char* charArray = "Sunday";

    // solution 3 -------------------
    string str3(charArray);
    cout << "str3: " << str3 << endl;


    // solution 4 -------------------
    string str4 = charArray;
    cout << "str4: " << str4 << endl;


    // solution 5 -------------------
    string str5(charArray, 3);          // 1st param is char array, 3 means: the first 3 char. So str5 is "Sun"
    cout << "str5: " << str5 << endl;

    // solution 6 -------------------
    string str6(str4, 3);               // 1st param is string,     3 means: start from index 3, so str6 is "day"
    cout << "str6: " << str6 << endl;

    // solution 7 --------------------
    string str7(10, 'a');
    cout << "str7: " << str7 << endl;


    return 0;
}
