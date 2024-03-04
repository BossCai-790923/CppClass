/*
https://leetcode.com/problems/minimum-size-subarray-sum/
*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {


        // step 1) define variable which is to save the final result
        int min_window_size = INT_MAX;

        // step 2) define variable to save the current window sum
        // as long as the window sum is greater or equals to the target
        // the window is a good one
        int window_sum = 0


        // step 3) define left & right pointer
        // initial window [0, 0)
        int left = 0, rigth = 0;


        while(right < nums.size()) {

            // step 3.1) move new value pointed by right pointer into the window
            window_sum += nums[right];
            right++;

            // step 3.2) as long as window is a good one, let's shrink the window, optimize our solution
            while(window_sum >= target){

                // step 3.2.1) update result
                min_window_size = min(min_window_size, right - left);

                // step 3.2.2) move left pointer rightwards
                windows_sum -= nums[left];
                left++;
            }
        }
        
        return min_window_size == INT_MAX ? 0 : min_window_size;
};