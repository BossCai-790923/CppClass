#include <bits/stdc++.h>
using namespace std;

void strExample() {

    cout << "Using reverse() on a str ----------------------" << endl;

    string str("Hello!");
    reverse(begin(str), end(str));

    cout << str << endl;

}

void vectorExample() {

    cout << "Using reverse() on a vector ----------------------" << endl;

    vector<int> v = {1, 3, 5, 7, 9}; // '=' can be ignored. 

    reverse(begin(v), end(v));

    for(auto i = begin(v); i != end(v); i++)
    cout << *i << " ";

    cout << endl;
}

void arrayExample() {

    cout << "Using reverse() on a arry ----------------------" << endl;

    int v[] = {1, 3, 5, 7, 9}; // '=' can be ignored. 

    reverse(begin(v), end(v));

    for(auto i = begin(v); i != end(v); i++)
    cout << *i << " ";

    cout << endl;
}




int main() {

    strExample();
    vectorExample();
    arrayExample();

    return 0;
}