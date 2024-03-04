#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {

    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1129_codebreaker_beareatrabbit.txt", "r", stdin); // Remove this line before your submit

    // step 1) read all data from input -----------------------------
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++) {
        
        cin >> arr[i];
    }

    // algo begin

    /*
    
    overlapping subproblems.

    Final Problem   : max tasteness for 10 rabbits, either eat or not eat
    some subproblems: max tasteness for 9 rabbits, either eat or not eat
    some subproblems: max tasteness for 8 rabbits, either eat or not eat
    some subproblems: max tasteness for 7 rabbits, either eat or not eat
    some subproblems: max tasteness for 6 rabbits, either eat or not eat
    some subproblems: max tasteness for 5 rabbits, either eat or not eat
    
    step 1) there are 2 states.
    state 1) how many rabbits
    state 2) whether eat or not.
    */

    ll dp[n][2];


    /*
    step 2) base case
    */
    dp[0][0] = 0;      // NOT eat 1st rabbit
    dp[0][1] = arr[0]; // eat 1st rabbit

    /*
    step 3) state transtion:
    for ith rabbit, 

    case 1) not eat
    dp[i][0] = max(dp[i-1][0], dp[i-1][1])
    
    case 2) eat
    dp[i][1] = dp[i-1][0] + arr[i]
    */

    for(ll i = 1; i < n; i++) {
       dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
       dp[i][1] = dp[i-1][0] + arr[i];
    }

    cout << max(dp[n-1][0], dp[n-1][1]) << endl;

    return 0;
}