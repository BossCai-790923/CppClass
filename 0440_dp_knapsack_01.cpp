/*
A thief robbing a store finds n items. 
The ith item is worth vi dollars and weighs wi pounds. 
The thief wants to take as much as possible, but he can carry at most W pounds in his knapsack. 
Which items should he take?
We call this the 0-1 knapsack problem because 
1) for each item, the thief must either take it or leave it behind
2) he cannot take a fractional amount of an item or take an item more than once.
bag_weight = 8
item_weight = [2, 3, 4, 5]
item_value = [3, 4, 5, 8]
---------------------------------------------------------------------------------
Question 1) How to define the dp function? / What's the meaning of the dp array? 
---------------------------------------------------------------------------------
it has 2 states:
1) item index 
2) bag weight 
our dp array:
dp = [][]
index i   means the first i items
index j   means my bag can hold max j kg
dp[i][j]  means my bag's max possible value when my bag can freely put the first i items and my bag max can hold j kg
dp[N][W]
---------------------------------------------------------------------
Question 2) What's the base case? / How to initialize the dp array?
---------------------------------------------------------------------
dp[0][0] ... dp[0][W] set their value to 0
dp[0][0] ... dp[N][0] set their value to 0
------------------------------------------------------------------------
Question 3) What's the state transition? From THE problem to subproblem?
------------------------------------------------------------------------
2 situations when I take the Nth item (last item):
a) wt[i] > j, means I can't put the Nth item into bag, too heavy
dp[i][j] = dp[i-1][j]
a) wt[i] <= j, means, I can put it 
dp[i][j] = dp[i-1][j-wt[i]]  +  val[i]
dp[i][j] = max(case1, case2)
*/
#include <bits/stdc++.h>
using namespace std;

int solve(int item_count, int val[], int weights[], int bag_capacity) {

    // base case
    if(item_count <= 0 || bag_capacity <= 0)
    return 0;

    // init dp array ------------------------------------
    vector<vector<int>> dp(item_count+1, vector<int>(bag_capacity+1, 0));

    // Can be omitted
    // for(int i = 0; i <= bag_capacity; i++) // 0 items, $0
    // dp[0][i] = 0;

    // for(int i = 0; i <= item_count; i++) // 0 items, $0
    // dp[i][0] = 0;

    // loop state ---------------------------------------
    for(int i = 1; i <= item_count; i++) { // loop all items
        for(int j = 1; j <= bag_capacity; j++) {
            
            if(weights[i-1] > j) {
                dp[i][j] = dp[i-1][j];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weights[i-1]] + val[i-1]);
            }
        }
    }

    return dp[4][8];
}


int main() {

    int wt[] = {2, 3, 4, 5};
    int val[] = {3, 4, 5, 8};

    int W = 8;
    int n = 4;

    int max_value = solve(n, val, wt, W);
    cout << max_value << endl;

    return 0;
}
