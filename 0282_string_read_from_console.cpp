#include <bits/stdc++.h>
using namespace std;


void cin_example() {

    string firstname, lastname;
    cin >> firstname >> lastname; // stops when met space / tab / line break
    cout << firstname << " " << lastname << endl;

    cout << firstname << " : it's length is: " << firstname.length() << endl;
    cout << lastname << " : it's length is: " << lastname.size() << endl;

}

void getline_example() {
    string username;
    getline(cin, username); // read whole line
    cout << "Full name " << username << endl;
}

int main() {

    // cin_example();
    getline_example();


    return 0;
}