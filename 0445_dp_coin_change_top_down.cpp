/*
https://leetcode.com/problems/coin-change/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {

    vector<int> memory;

    int dp(vector<int>& coins, int amount) {

        // base case
        if(amount < 0) return -1;
        if(amount == 0) return 0;

        // check memory, avoid duplicate calculation
        if(memory[amount - 1] != 0) 
        return memory[amount - 1];

        // actual calculation 
        int min = INT_MAX;
        for(int coin : coins) {
            int branch_result = dp(coins, amount - coin);
            if(branch_result >= 0 && branch_result < min) {
                min = branch_result + 1;
            }
        }

        // save to memory table
        memory[amount - 1] = (min == INT_MAX ? -1 : min);

        return memory[amount - 1];
    }


public:

    int coinChange(vector<int>& coins, int amount) {
        memory.resize(amount);
        return dp(coins, amount);
    }
};

int main() {

    Solution s;

    vector<int> coins = {1, 2, 3};
    int amount = 11;

    int answer = s.coinChange(coins, amount);
    printf("%d", answer);

}
