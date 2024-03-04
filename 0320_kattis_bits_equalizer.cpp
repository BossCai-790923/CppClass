
/*
https://open.kattis.com/problems/bitsequalizer
*/


#include <bits/stdc++.h>
using namespace std;


/*
------------------
Analysis
------------------
S = 0 1   0 1   ? ? 
T = 0 1   1 0   0 1
S and T are of same length, there are only 6 cases.
First 2 cases, we can safely ignore.
Then let's summarize:
case 0 0 -> ignore
case 1 1 -> ignore
case 0 1 -> i++
case 1 0 -> j++
case ? 0 -> k++
case ? 1 -> l++
int total_steps = 0
Step 1)
Let's swap group i and group j as much as we can. So that we can get 2 groups in good shape in 1 move. [greedy algo]
Maxium, we can swap min(i, j) groups.
swap_count = min(i, j)
total_step += swap_count
i -= swap_count
j -= swap_count (now, one of them is 0)
Step 2) 
case 1: j != 0
 1 1 ... 1 ? ? ... ? ? ? .. ?
 0 0 ... 0 0 0 ... 0 1 1 .. 1
|---j-----|----k----|---l----|
if j > l, then fail -> return -1
else j <= l:
we swap as much as we can:
1 ? --> ? 1  -> swap j times, we get j groups in good shape.
0 1     0 1 
after this, only left groups are:
? ? -> in total, we have k + l groups, we swap ? to 0 / 1, k + l times, we make all of them into good shape.
0 1
in total we swap j + k + l times. -> it equals to: i + j + k + l times.
case 2: i != 0
 0 0 ... 0 ? ? ... ? ? ? .. ?
 1 1 ... 1 0 0 ... 0 1 1 .. 1
|---i-----|----k----|---l----|
in total we swap i + k + l times. -> it equals to: i + j + k + l times.
case 3: i == 0 && j == 0
 ? ? ... ? ? ? .. ?
 0 0 ... 0 1 1 .. 1
|----k----|---l----|
in total we swap k + l times. -> it equals to: i + j + k + l times.
*/



int main() {

    freopen("0320.txt", "r", stdin);

    int tc_count; 
    scanf("%d", &tc_count);

    for(int casenum = 0; casenum < tc_count; casenum++) {

        // step 1) read data per test case
        string s, t;
        cin >> s >> t;

        cout << "LOG --------------------------------------------" << endl;
        cout << "LOG: str s: " << s << endl;
        cout << "LOG: str t: " << t << endl;

        int total_steps = 0;

        // step 2) Your algo goes here

        int i = 0, j = 0, k = 0, l = 0;
        char m, n;

        for(int x = 0; x < s.size(); x++) {
            m = s[x];
            n = t[x];

            if(m == '0' && n == '0') {
                continue;
            }

            else if(m == '1' && n == '1') {
                continue;
            }

            else if(m == '0' && n == '1') {
                i++;
            }

            else if(m == '1' && n == '0') {
                j++;
            }

            else if(m == '?' && n == '0') {
                k++;
            }

            else if(m == '?' && n == '1') {
                l++;
            }
        }
        
        cout << "LOG - i: " << i << ", j: " << j << ", k: " << k << ", l: " << l << endl;

        total_steps += min(i, j);

        cout << "LOG - " << min(i, j) << " directly swapped. Now total steps : " << total_steps << endl;

        int minij = min(i, j);
        i -= minij;
        j -= minij;

        cout << "LOG - i: " << i << ", j: " << j << endl;

        if(j != 0 && j > l) {
            total_steps = -1;
        }
        else {
            total_steps += i;
            total_steps += j;
            total_steps += k;
            total_steps += l;
        }

        // step 3) print result
        // Case 1: 3
        cout << "Case " << casenum + 1 << ": " << total_steps << endl;
    }



    return 0;
}