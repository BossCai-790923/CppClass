#include <bits/stdc++.h>
using namespace std;


void find_sub_string(string s, string subStr) {

    cout << "Find " << subStr << " in " << s << "---------------------------------" << endl;

    int index = s.find(subStr);

    if(string::npos == index) {
        cout << subStr << " is not found in string " << s << endl;
    }
    else {
        cout << subStr << " is found in string " << s << " at position: " << index << endl;

        index = s.find(subStr, index+1);
        cout << subStr << " is found in string " << s << " at position: " << index << endl;
    }


    /*
    Q) What is string::npos?
    A) string::npos stands for "no position"
    string::npos is a constant of value -1, defined inside string
    string::npos means until the end of the string
    when s.find(subStr) returns string::npos, find() function basically is saying " Nope, subStr doesn't exist in str"
    s.find(subStr)     : find subStr in s, search from the 1st element.
    s.find(subStr, 3)  : find subStr in s, search from the 3rd element.
    */
}


void reverse_find_sub_string(string s, string subStr) {

    cout << "Reverse find " << subStr << " in " << s << "---------------------------------" << endl;

    int index = s.rfind(subStr);

    if(string::npos == index) {
        cout << subStr << " is not found in string " << s << endl;
    }
    else {
        cout << subStr << " is found in string " << s << " at position: " << index << endl;

        index = s.rfind(subStr, index-1);
        cout << subStr << " is found in string " << s << " at position: " << index << endl;
    }
}


int main() {

    string s = "highway_highway";

    string s1 = "way";

    string s2 = "WAY";

    find_sub_string(s, s1);
    find_sub_string(s, s2);

    reverse_find_sub_string(s, s1);
    reverse_find_sub_string(s, s2);


    return 0;
}