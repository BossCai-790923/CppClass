#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> res;
    vector<int> path;
    int sum = 0; // the total sum of vector path
    int target = 0;
    int k = 0;

    void backtrack(int startIndex) {
        // base case
        if(path.size() == k && sum == target) {
            res.push_back(path);
            return;
        }        

        // for loop - loop all choices
        for(int i = startIndex; i <= 9; i ++) {

            if(sum + i > target) { // pruning
                break;
            }

            sum += i;
            path.push_back(i);

            backtrack(i + 1);

            sum -= i;
            path.pop_back();
        }
    }


    vector<vector<int>> combinationSum3(int k, int n) {
        this -> k = k;
        this -> target = n;
        backtrack(1);
        return res;
    }
};



int main() {

    Solution s;
    vector<vector<int>> result = s.combinationSum3(3, 9);

    for(auto i : result) {
        for(auto j : i) {
            cout << j << " ";
        }
        printf("\n");
    }

    return 0;
}