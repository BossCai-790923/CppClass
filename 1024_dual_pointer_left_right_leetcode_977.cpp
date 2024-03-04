/*
https://leetcode.com/problems/squares-of-a-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> res(nums.size());


        int l = 0, r = nums.size() - 1;

        int lSqr = 0, rSqr = 0;

        int index = nums.size() - 1;

        while(l <= r) {

            lSqr = nums[l] * nums[l];
            rSqr = nums[r] * nums[r];

            if(lSqr <= rSqr) {
                res[index] = rSqr;
                index--;
                r--;
            }
            else {
                res[index] = lSqr;
                index--;
                l++;
            }
        }
        return res;

    }
};