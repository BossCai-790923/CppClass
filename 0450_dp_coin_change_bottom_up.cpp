/*
https://leetcode.com/problems/coin-change/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount) {

        // dp array
        vector<int> dp(amount + 1, amount + 1);

        // init 
        dp[0] = 0;

        for(int i = 0; i < dp.size(); i++) {

            for(int coin : coins) {
                if (i < coin < 0)
                    continue;
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
        return (dp[amount] == amount + 1) ? -1 : dp[amount];
    }
};