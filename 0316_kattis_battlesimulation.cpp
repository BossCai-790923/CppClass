/*
https://open.kattis.com/problems/battlesimulation
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string attack;
    cin >> attack;

    for(int i = 0; i < attack.size(); i++) {

        string s1 = attack.substr(i, 3);

        if(s1 == "RBL"
        || s1 == "RLB"
        || s1 == "LRB"
        || s1 == "LBR"
        || s1 == "BRL"
        || s1 == "BLR") {
            printf("%c", 'C');
            i += 2;
        }
        else if (attack[i] == 'R')
            printf("%c", 'S');
        else if (attack[i] == 'B')
            printf("%c", 'K');
        else if (attack[i] == 'L')
            printf("%c", 'H');
    }

    return 0;
}