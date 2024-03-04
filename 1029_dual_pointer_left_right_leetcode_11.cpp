/*
https://leetcode.com/problems/container-with-most-water/
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    int maxArea(vector<int>& height) {

        int res = 0, tmp = 0;

        int l = 0;
        int r = height.size() - 1;

        while(l <= r) {

            tmp = min(height[l], height[r]) * (r - l);
            res = max(tmp, res);

            if(height[l] <= height[r]) {
                l++;
            }
            else {
                r--;
            }
            
        }
        return res;
    }
};