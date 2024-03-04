/*
https://leetcode.com/problems/combination-sum-ii/
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    vector<vector<int>> res;
    vector<int> path;
    int target = 0;
    int sum = 0;




    void backtrack(vector<int>& candidates, int startIndex) {
        // base case
        if(sum == target) {
            res.push_back(path);
            return;
        }

        // loop all choices
        for(int j = startIndex; j < candidates.size(); j++) {

            int i = candidates[j];

            // pruning 1
            if(sum + i > target) { // remove invalid
                break;
            }

            // pruning 2
            if(j > startIndex && candidates[j] == candidates[j - 1]) { // ignore the 2nd '1'
                continue;
            }
            // ----------------------------------------------------------------------------



            //backtracking
            sum += i;
            path.push_back(i);

            backtrack(candidates, j + 1); // because we cannot use duplicate, so we have to put j + 1

            sum -= i;
            path.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        this -> target = target;
        sort(begin(candidates), end(candidates)); 
        backtrack(candidates, 0);
        return res;
    }
};



int main() {

    Solution s;
    vector<int> candidates = {10,1,2,7,6,1,5};
    vector<vector<int>> result = s.combinationSum2(candidates, 8);

    for(auto i : result) {
        for(auto j : i) {
            printf("%d ", j);
        }
        printf("\n");
    }


    return 0;
}


/*
HOMEWORK
https://leetcode.com/problems/combination-sum-iii/
*/
