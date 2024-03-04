/*
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2905
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc_count;

    scanf("%d", &tc_count);

    for(int tc = 1; tc <= tc_count; tc++) {
        
        // step 1) prepare data 

        int n, k, p;
        scanf("%d%d%d", &n, &k, &p);

        /*
        n : n players
        k : kick off from No. k player
        p : pass p times
        */

        int result;

        // step 2) your algo goes here, calculate the package & cost
        result = (k + p) % n;
        // when result is 0, it should be No.n Player.
        result = result == 0 ? n : result;

        // Print result 
        cout << "Case " << tc << ": " << result << endl;

    }
    
   return 0;
}