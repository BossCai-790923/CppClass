/*
https://codebreaker.xyz/problem/lis_easy
---------------------------------------------------------------------------------
Question 1) How to define the dp function? / What's the meaning of the dp array? 
---------------------------------------------------------------------------------
dp[i] means: the size of the Longest Increasing Sequence when the string ends with ith character
---------------------------------------------------------------------
Question 2) What's the base case? / How to initialize the dp array?
---------------------------------------------------------------------   
dp[i] = 1
------------------------------------------------------------------------
Question 3) What's the state transition? From THE problem to sub-problem?
------------------------------------------------------------------------
dp[i] equals to: for all j from 0 to (i-1), if num[j] < num[i], put it into a list, dp[i] is max(list) + 1
dp[i]=max(dp[j])+1      Condition: 0≤j<i && num[j]<num[i]
*/

#include <bits/stdc++.h>
using namespace std;



int main() {

    freopen("0457.txt", "r", stdin);

    int n;
    scanf("%d", &n);

    vector<int> nums;
    int x;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        nums.push_back(x);
    }

    // for(int i : nums)
    //     printf("%d", i);
    // printf("\n");

    /*
    declare & init dp array -------------------------
    */
    vector<int> dp(n, 1);

    /*
    state transition ----------Z----------------------
    */

   for(int i = 1; i < n; i++) {

    for(int j = 0; j < i; j++) {
        if (nums[j] < nums[i])
            dp[i] = max(dp[i], dp[j] + 1);
    }

    // for(int i : dp)
    //     printf("%d ", i);
    // printf("\n");

   }

    int ans = *max_element(begin(dp), end(dp)); 
    printf("%d", ans);

    return 0;
}
