#include <bits/stdc++.h>
using namespace std;


/*
Requirement:
Put number which has smaller reminder when divided by 7 in the front
If reminder is the same, put the bigger one in the front
*/


/*
if function returns true, put x in the front
if function returns false, put x in the back
*/

bool sortByReminder(int x, int y) {

    int a = x % 7;
    int b = y % 7;

    if(a != b) {
        return a < b; // if x has a smaller reminder when divided by 7, put x in the front
    }

    return x > y;

}


int main()
{

    vector<int> v(10);
    
    for(int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }


    puts("initially ----------------------");

    for(int i : v) {
        printf("%d\n", i);
    }

    sort(begin(v), end(v), sortByReminder);


    puts("later ----------------------");

    for(int i : v) {
        printf("%d\n", i);
    }
    
    return 0;
}