/*
https://vjudge.net/problem/UVA-1583
1) many to 1 relationship from generator to the target
198 -> 216
207 -> 216
1) pre-calculation / cache
*/


#include <bits/stdc++.h>
using namespace std;


/*
index : target number 
value : min generator
*/
int result[100'001];

int main() {


    // cache / pre-calculated result

    for(int generator = 0; generator < 100'001; generator++ ) {
        
        /*
        generator % 10
        generator / 10
        */

        int target = generator;
        string s = to_string(generator);
        for(char ch : s) {
            target += (int)ch - 48;
        }

        if(target <= 100'000 && result[target] == 0) {
            result[target] = generator;
        }
    }



    freopen("0770.txt", "r", stdin); // Remove this line before your submit

    int tc_count;  // number of test cases
    scanf("%d", &tc_count);

    while (tc_count--)  // shortcut to repeat until 0
    {

        // read data per test case
        int a;
        scanf("%d", &a);
        printf("%d\n", result[a]);
    }

    return 0;
}

/*
1) use to_string to quickly get all digits from a int number
2) precalculate & cache the result into some ds
3) use single quote as thousand separator
*/
