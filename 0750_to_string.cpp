#include <bits/stdc++.h>
using namespace std;


int main() {

    int i = 123;
    string s1 = to_string(i);
    cout << s1 << endl;

    char c = 'a';
    string s2 = to_string(c); // convert to its acsii code 
    cout << s2 << endl;

    bool b = true;
    string s3 = to_string(b);
    cout << s3 << endl;
    
    string s4 = b ? "true" : "false";
    cout << s4 << endl;



    return 0;
}
