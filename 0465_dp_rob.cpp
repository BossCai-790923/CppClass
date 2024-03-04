/*
https://leetcode.com/problems/house-robber/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        /*
        declare dp array
        dp[i] means: max money I can rob for the first ith home.
        */
        vector<int> dp(nums.size());

        // init dp array
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        /* state transtion
        for the ith house,
        case 1) I don't rob it, then the total money I can get: dp[i-1]
        case 2) I do rob it, then the total money I can get: dp[i-2] + nums[i]
        dp[i] = max(dp[i-1], dp[i-2] + nums[i])
        */

        for(int i=2; i <= nums.size(); i++)
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);

        puts("LOG: print dp array, verify your thought:");
        for_each(begin(dp), end(dp), [](int i){printf("%d ", i);});

        return dp[nums.size()];
    }
};



// this is your own test code, dont submit -----------------

int main() {

    Solution s;

    vector<int> nums = {1, 2, 3, 1};

    int answer = s.rob(nums);
    
    printf("%d", answer);

}
