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

    // Step 1) Fill up the up right corner arr[0][n-1] with 1, as starting point.
    // Step 2) Then I simply go down / go left / go up / go right to fill up the array.
    // Stop condition:
    // 1) I stop until I reach the border 
    // 2) the next number has already been filled up.

    // define increasing variable i, increasing from 1 to n^2, I use i to fill up the whole array ----------------------
    int i = 1;

    // Step 1) 
    int x = 0;
    int y = n - 1;
    arr[x][y] = 1;

    // Step 2) 

    while(i < n * n) {
        while(x + 1 < n && arr[x+1][y] == 0) arr[++x][y] = ++i;
        while(y - 1 >=0 && arr[x][y-1] == 0) arr[x][--y] = ++i;
        while(x - 1 >=0 && arr[x-1][y] == 0) arr[--x][y] = ++i;
        while(y + 1 < n && arr[x][y+1] == 0) arr[x][++y] = ++i;
    }

    for(x = 0; x < n; x++) {
        for(y = 0; y < n; y++) {
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }





    return 0;
}