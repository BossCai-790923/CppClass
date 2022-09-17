/*
Requirement:
Write a program that reads in names from console and outputs the one that comes first alphabetically.
Stops reading name when you meet "stop".
------------
SAMPLE1
------------
Please enter names: 
Tom
Lilly
Billy
John
Susan
stop
The first name alphabetically is Billy
------------
SAMPLE2
------------
Tom Billy John Susan Sue Clark 
Fang
Fan
Liu
Zhang
stop
The first name alphabetically is Billy
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("0289_input.txt", "r", stdin);

    string name;
    string firstname;
    cout << "Please enter names: " << endl;

    cin >> name;
    firstname = name;
    
    while (name != "stop") {

        if (name < firstname)
            firstname = name;
    
        cin >> name;
    }

    cout << "The first name alphabetically is " << firstname << endl;
}