/*
Read a number n from console.
Create a 2 dimensional array （square size) .
Start from 1, fill up the array from the upper right corner, then go downwards,
when it reaches the border, goes left.
Fill up the square array as the output below, till the array has been completely filled up.
Print it to the console.
Input: n
4
Output:
10 11 12 1
9  16 13 2
8  15 14 3
7  6  5  4
Constraints:
2 <= n <= 10
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    // Step 1) Prepare data --------------------------

    // because max n is 10, so I just define a 2-d array, 10 * 10
    int arr[10][10];

    memset(arr, 0, sizeof(int) * 100);

    int n;
    scanf("%d", &n);

    // Step 2) main logic ----------------------------

    /*
    n * n
      n + (n-1) + (n-1) + (n-2) + (n-2) .... + 1 + 1
    = n + 2 * [(n -1) + (n -2) + .... + 1]
    = n + 2 * [1 + (n-1)] * (n -1) / 2
    = n + n * (n - 1)
    = n * n
    */

    return 0;
}