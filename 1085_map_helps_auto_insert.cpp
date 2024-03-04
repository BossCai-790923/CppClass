#include <bits/stdc++.h>
#define ll long long
using namespace std;


void example1() {

    map<int, int> mp;
    cout << mp.size() << endl;
    // now mp is empty

    cout << mp[0] << endl;
    // but we still can get a 0 if we try mp[0], because map helps auto insert a pair if the key is not found
    // after that, a new pair(0, 0) is auto inserted into the map by C++

    cout << mp.size() << endl;
    cout << "key 0 exists in mp? " << (mp.count(0) ? "true" : "false") << endl;

}

void example2() {

    unordered_map<char, int> mp2;

    for(char c : "Hello C++!") {
        mp2[c] += 1;
    }

    for(auto i : mp2) {
        cout << i.first << " : " << i.second << endl;
    }

    /*
    Use map -> if you need to loop all the pairs in a sorted order
    Use unordered_map -> otherwise
    */

}


int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    // example1();
    example2();

    return 0;
}