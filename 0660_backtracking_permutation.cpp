/*
https://leetcode.com/problems/permutations/
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> result; // all paths
    vector<int> path; // single path from root to leaf


    /*
    
    1) calculate choices
    2) fill up the path
    */

    void backtracking(vector<int>& nums, vector<bool>& used) {

        // base case --------------------------------------
        if(path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        // recursive call ---------------------------------

        // calculate the choices
        for(int i = 0; i < nums.size(); i++) {
            if(used[i] == true) {
                continue;
            }

            // put nums[i] into path
            used[i] = true;
            path.push_back(nums[i]);
            
            backtracking(nums, used);
            // The backtracking function call finishes if the code goes here
            // if it finishes, meaning, some valid path is found
            // let's revert back its effect on the global variable - path
            // so that, the next for loop round can proceed as if this backtracking never happened.

            // remove nums[i] from path
            used[i] = false;
            path.pop_back();

        // We often discuss bactracking algo together with Depth First Search

        }

        /*
        
        1) I put recursive call in a for loop
        2) As soon as the path.size() equals to nums.size(), then the current recursive call finishes
        3) As soon as it finishes, I need to immediately erase its effect on the global variable - path
        */


    }




    vector<vector<int>> permute(vector<int>& nums) {


        vector<bool> used(nums.size(), false);

        backtracking(nums, used);

        // LOG --------------------------
        for(vector<int> p : result) {
            for(int i : p) {
                printf("%d ", i);
            }
            printf("\n");
        }
        // ------------------------------

        return result;
      
    }
};



int main() {

    // testing code ------------------
    Solution s;
    vector<int> nums = {1, 2, 3};
    s.permute(nums);

    return 0;
}
