/*
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4391
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i, j;

    while(scanf("%d%d%d", &n, &i, &j) == 3) {

        // step 1) prepare data 

        int result = 0;

        // step 2) your algo goes here, calculate the package & cost
        // ... ... 

        while(i != j) {
            i = (i+1) / 2;
            j = (j+1) / 2;
            result++;
        }

        // Print result 
        cout << result << endl;

    }
    
   return 0;
}