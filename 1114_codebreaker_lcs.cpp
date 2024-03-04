/*
https://codebreaker.xyz/problem/lcs

subsequence ：take random char from original string, keep their original order
substring   ：take a continous part from the original string

example     : my_apple_is_red
subsequce   : my_is / m_a_i_r    
substring   : my / apple / is / red


*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    string s, r;
    cin >> s >> r;

    /*
    Dynamic programming Property 1: overlapping subproblems. 重叠子问题

    Final problem: LCS of happy & apple     (1)
    subproblem   : LCS of happ  & apple     (2)
    subproblem   : LCS of hap   & apple     (3)
    subproblem   : LCS of ha    & apple     (4)
    subproblem   : LCS of ha    & appl      (5)
    subproblem   : LCS of ha    & app       (6)
    subproblem   : LCS of ha    & ap        (7)
    subproblem   : LCS of h     & a         (8)

    Overlapping:
    (7) is subproblem of (1) - (6)
    (6) is subproblem of (1) - (5)
    (5) is subproblem of (1) - (4)
    */

    /*
    step 1) figure out the STATE of the subproblems.
    There are 2 states in those subproblem.
    1) string s size
    2) string r size

    so, we define a 2-d dp array to store the result of those subproblems

    You must be clear the meaning of dp[i][j], which is the size of LCS of substring s[0:i] & r[0:j]
    */

    int dp[s.size() + 1][r.size() + 1];

    /*
    step 2) we define the base case
    when string r length is 0, then no matter the size of s, the LCS is always 0
    when string s length is 0, then no matter the size of r, the LCS is always 0
    */
    for(int i = 0; i <= s.size(); i++) {
        dp[i][0] = 0;
    }
    
    for(int i = 0; i <= r.size(); i++) {
        dp[0][i] = 0;
    }
    
    

    /*
    step 3) the most critical / difficult step
    How to find dp[i][j] from its all subproblems.

    There are 2 case:

    case 1) -----------------------------------
    if the last char of s[0:i] & last char of r[0:j] are the same

    for example:
    s = abcx
    r = bbbx

    then LCS('abcx', 'bbbx') = LCS('abc', 'bbb') + 1
    => dp[i][j] = dp[i-1][j-1] + 1

    case 2) -----------------------------------

    if the last char of s & j are not same

    for example:
    s = abcx
    r = bbbc

    then LCS('abcx', 'bbbc') = max(LCS('abc', 'bbbc'), LCS('abcx', 'bbb'))
    => dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    
    */

    for(int i = 1; i <= s.size(); i++) {
        for(int j = 1; j <= r.size(); j++) {

            if(s[i-1] == r[j-1]) {  // ATTENTION! TRAP HERE! when i (s.size()) is 1, we should check s[0], 1st character
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[s.size()][r.size()] << endl;

    return 0;
}