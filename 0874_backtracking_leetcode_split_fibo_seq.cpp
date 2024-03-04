/*
https://leetcode.com/problems/split-array-into-fibonacci-sequence/
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:

    vector<vector<int>> res;
    vector<int> path;
    string num;

    void backtracking(int beginIndex) {

        // base case --------------------------------

        if(beginIndex == num.size()) {
            if(path.size() >= 3) {
                res.push_back(path);
            }
            return;
        }

        // loop all choices ---------------------------
        for(int endIndex = beginIndex + 1; endIndex <= num.size(); endIndex++) {
            
            int length = endIndex - beginIndex;
            string iStr = num.substr(beginIndex, length);

            /*
            Pruning
            */

            // 1) I need to check whether iStr starts with '0' or not
            if(iStr[0] == '0' && length > 1) {
                break; 
            }

            // 2) I need to check iStr can be converted to a valid int whose max is INT_MAX
            // solution 1)
            /*
            string maxIntStr = to_string(INT_MAX);
            int maxIntLength = maxIntStr.size();
            if(length > maxIntLength || length == maxIntLength && iStr > maxIntStr) { // invalid int
                break;
            }
            */

            // solution 2)
            ll myll = stoll(iStr);
            if(myll > INT_MAX) {
                break;
            }

            int i = stoi(iStr);

            int pathSize = path.size();

            if(pathSize >= 2) {

                ll last2NumSum = 1LL * path[pathSize - 1] + path[pathSize - 2];

                // case 1) last2NumSum < i -> pruning
                if(last2NumSum < i) {
                    break;
                }

                // case 2) last2Numsum > i -> pruning, try next choice
                if(last2NumSum > i) {
                    if(i == 0) {
                        break;
                    }
                    else {
                        continue;
                    }
                }
                // case 3) last2Numsum == i 
            }

            // if i can be put inside path, 
            path.push_back(i);
            backtracking(endIndex);
            path.pop_back();

        } // end of for loop


    }


    vector<int> splitIntoFibonacci(string num) {
        this -> num = num;
        backtracking(0);

        if(res.size() > 0) {
            return res[0];
        }
        else {
            path.clear();
            return path;
        }
    }
};


int main() {

    Solution s;
    vector<int> result = s.splitIntoFibonacci("1101111");

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}