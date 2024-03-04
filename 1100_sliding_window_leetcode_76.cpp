/*
https://leetcode.com/problems/minimum-window-substring/

1) the order doesn't matter
2) if t contains 3 'a', 4 'b', the substring returned should also contains 3'a' & 4 'b'.

if we use brute force

for(int i = 0; i < s.size(); i++) {
    for(int j = i+1; j < s.size(); j++) {
        if s[i:j] includes all t's chars
        result = min(result, s[i:j].size())
    }
}

O(n^2)

Here comes the algo of Sliding Window

Step 1) define left = right = 0
        So our window now is [left, right), initial window size is 0
        Purpose: get ready

Step 2）Move right pointer to the right
        until substring inside the window satisfies the condition
        Purpose: find a feasible solution

Step 3）Move left pointer to the right
        until substring inside the window NO LONGER satisfies the condition
        Purpose: optimize the feasible solution to make it better

Step 4) Repeat step 2 & 3
        until right pointer reaches the end of the string

In step 2) window is getting bigger and bigger
In step 3) window is getting smaller and smaller 

*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    string minWindow(string s, string t) {

        // step 1) we define 2 maps - need & window
        unordered_map<char, int> need, window;

        // step 2) let's record all the chars' count
        for(char c : t) {
            need[c]++;
        }

        // Now, we've successfully convert string s into map need

        // step 3) we define left & right pointer
        int left = 0, right = 0;

        // step 4) define a variable to remember
        // how many chars inside the window have already satisfied the min count requirement.
        int valid_ch_count = 0;

        // step 5) define the start index & length of the shortest string which satisfies the requriement.
        int result_str_start_index =0, result_str_length = INT_MAX;


        // step 6) loop until the right pointer reaches the end of string s
        while(right < s.size()) {

            // step 6.1) move char s[right] into the window
            char c = s[right];
            right++;

            // step 6.2) if c is a char which exists in t or need
            if(need.count(c)) {

                /*
                then let's update the record of c in map window
                
                if c count in w indow equals to count in map need
                then we have one more char - c, now is satisfied the rquirement count.
                */
                window[c]++;
                if(window[c] == need[c]) {
                    valid_ch_count++;
                }
            }


            /*
            step 6.3) Once valid_ch_count == need.size()
            substring inside the window is a good one!
            Let's try to shorten the window (move left pointer rightwards)
            And in the meanwhile, we try our best to keep the substring inside the window valid
            Now is the optimization phase
            */
            while(valid_ch_count == need.size()) {

                // step 6.3.1) update the answer
                if(right - left < result_str_length) {
                    result_str_start_index = left;
                    result_str_length = right - left;
                }


                // step 6.3.2) move char pointed by left out of the window
                char d = s[left];
                left++;

                // if the removed char d exists in map need
                if(need.count(d)) {
                    if(window[d] == need[d]) {
                        valid_ch_count--;
                    }
                    window[d]--;
                }
            }
        }

        return result_str_length == INT_MAX ? "" : s.substr(result_str_start_index, result_str_length);
    }
};

int main() {
    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up
    
    Solution s;
    string result = s.minWindow("ADOBECODEBANC", "ABC");
    cout << result;
    
    return 0;
}

