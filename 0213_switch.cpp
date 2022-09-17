#include <bits/stdc++.h>
using namespace std;


int main() {

    char grade = 'D';

    switch(grade) {

        case 'A':
            cout << "Excellent!" << endl;
            break;

        case 'B':
        case 'C':

            cout << "Well done!" << endl;
            break;


        case 'D':

            cout << "Pass"<<endl;
            break;

        case 'E':
        case 'F':

            cout << "Better try again!" << endl;
            break;

        default:

            break;
    }



    return 0;
}
