#include <bits/stdc++.h>
using namespace std;



int main() {

    string str("Hello String! Wake up to a beautiful day!");
    cout << "Original str: " << endl 
         << str << endl;

    cout << "EXAMPLE 1: str.erase(index, count) ----------------------------------" << endl;

    int startIndex = str.find("!") + 1;   // 13
    int count = str.size() - startIndex;  // 28
    cout << "We delete from index: " << startIndex << ", we delete " << count << " chars ....." << endl;

    str.erase(startIndex, count);

    cout << str << endl << endl;


    cout << "EXAMPLE 2: str.erase(iterator) ----------------------------------" << endl;
    string::iterator it = str.begin();
    str.erase(it);
    cout << str << endl << endl;


    cout << "EXAMPLE 3: str.erase(start_iterator, end_iterator) ----------------------------------" << endl;
    str.erase(str.begin(), str.end());

    if(str.size() == 0) {
        cout << "The string is empty " << endl;
    }
    else {
        cout << str << endl << endl;
    }



    return 0;
}