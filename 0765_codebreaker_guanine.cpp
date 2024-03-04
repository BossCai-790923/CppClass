/*
https://codebreaker.xyz/problem/guanine
*/

#include <bits/stdc++.h>
using namespace std;

/*
vector 
list
*/

int main() {

    freopen("0765.txt", "r", stdin); // remove this line when you submit online

    int a; // number of command
    scanf("%d", &a);

    string cmd;
    string arg;

    list<char> l;


    while(a--) {

        cin >> cmd >> arg;

        if(cmd == "ADD_BACK") {
            l.push_back(arg.c_str()[0]);
        }
        if(cmd == "ADD_FRONT") {
            l.push_front(arg.c_str()[0]);
        }
        if(cmd == "QUERY") {
            auto iter = l.begin();
            advance(iter, stoi(arg));
            printf("%c\n", *iter);
        }

        /*
        
        "SNIP_BACK y": cut the DNA between nucleotide y and nucleotide y+1 (0-indexed) and keep the front segment,
        "SNIP_FRONT y": cut the DNA between nucleotide y and nucleotide y+1 (0-indexed) and keep the back segment.
        */

        if(cmd == "SNIP_FRONT") {
            auto iter = l.begin();
            advance(iter, stoi(arg) + 1); // if arg is 5, we need to let the iter point to the 6th value
            l.erase(l.begin(), iter);     // because the 5th is to be thrown away, and the rease function's 2nd parameter is exclusive  
        }
        if(cmd == "SNIP_BACK") {
            auto iter = l.begin();
            advance(iter, stoi(arg) + 1); 
            l.erase(iter, l.end());    
        }

    }
}
