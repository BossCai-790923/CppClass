/*
https://codebreaker.xyz/problem/beareatrabbit

dynamic programming
*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1129_codebreaker_beareatrabbit.txt", "r", stdin); // Remove this line before your submit

    /*
    No.1 trap: 
    int range [-2 * 10^9, 2 * 10^9]
    -> ALWAYS USE long long in this question, no more int!
    */


    // step 1) read all data from input -----------------------------
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    /*
    overlapping subproblems.

    Final Problem   : max tasteness for 10 rabbits
    some subproblems: max tasteness for 9 rabbits
    some subproblems: max tasteness for 8 rabbits
    some subproblems: max tasteness for 7 rabbits
    some subproblems: max tasteness for 6 rabbits
    some subproblems: max tasteness for 5 rabbits    

    Dynamic Programming Property No.2: optimal substructure 最优子结构
    */

    /*
    
    we have a long list of numbers
    
    step 1) figure out the STATE of those subproblems
    There is 1 state in those subproblems.
    1) rabbit count

    so we define a 1-d dp array to store the result of those subproblems.

    dp[i] means: max tasteness the bear can accumulate if it eats the first i rabbits.
    in total n + 1 situations.
    */
    vector<ll> dp(n+1, 0LL);


    /*
    step 2) we define base case
    when there is 0 rabbit, dp[0] = 0
    when there is 1 rabbit, dp[1] = max(0, arr[0])  TRAP 2
    */
   dp[0] = 0LL;
   dp[1] = max(0LL, arr[0]);

   
   /*
   step 3) the most critical / difficult part / step

   state transtion:
   how to find dp[i]

   For ith rabbit, the bear has 2 choices.
   There are 2 case here.
   Case 1 ----------------------------------
   The bear eats it, the max tasteness it can accumulate is:
   dp[i] = dp[i-2] + arr[i-1]

   1st rabbit -> arr[0]
   2nd rabbit -> arr[1]

   Case 2 ----------------------------------
   The bear doesn't eat the rabbit, 
   dp[i] = dp[i-1]
   
   dp[i] = max(dp[i-2] + arr[i-1], dp[i-1])
   Z

   for(ll i = 2; i <=n; i++) {
    dp[i] = max(dp[i-2] + arr[i-1], dp[i-1]);
   }

   cout << dp[n] << endl; 

    return 0;
}