#include <bits/stdc++.h>
using namespace std;


bool valid(int l, int s, vector<int> v) {


    vector<vector<int>> dp(s+1, vector<int>(l+1, 0)); // 0 means false

    /*
    dp[i][j]
    i - for the first i metallic bars
    j - get an exact length j
    0 - impossible
    1 - possible
    */

    // dp array init -------------------------
    for(int i = 0; i <=s; i++) {
        dp[i][0] = 1;
    }

    // loop state ------------------------------
    for(int i = 1; i <= s; i++) { // loop s bars
        for(int j = 1; j <= l; j++) { // loop length from 1 to l

            if(j >= v[i-1]) { // can put inside (v is 0 based)
                dp[i][j] = dp[i-1][j] | dp[i-1][j - v[i-1]];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[s][l];
}

int main() {

    freopen("0610_uva12455.txt", "r", stdin); // remove this line when you submit online

    int tc_count; // number of test cases
    scanf("%d", &tc_count);

    while(tc_count--) { //shortcut to repeat until 0

        int l;
        scanf("%d", &l); // target length

        int s;
        scanf("%d", &s); // bar count

        vector<int> v(s, 0);
        for(int i = 0; i < s; i++) {
            scanf("%d", &v[i]);
        }

        if(valid(l, s, v)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}