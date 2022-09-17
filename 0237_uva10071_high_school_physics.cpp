/*
Question:
https://onlinejudge.org/external/100/10071.pdf
Submit:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=25
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("0237_uva10071_high_school_physics.txt", "r", stdin); // remove this line when you submit online

    int v, t;

    while(scanf("%d %d", &v, &t) == 2) { // read as long as next line gives you a full set of new test case
        
        // here begins your logic
        if (t == 0) {
            printf("%d\n", 0);
            continue;
        }

        // int a = v / t;
        // int s = 0.5 * (v / t) * (2t) * (2t)
        int s = 2 * v * t; 
        printf("%d\n", s);

    }


    return 0;
}