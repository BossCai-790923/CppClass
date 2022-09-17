/*
Requirement:
Print out all possibilities of the multiplication result of a 3 digits number and 2 digits number using column method to the console. 
So, that all the numbers printed to the console belong to the input number set.
Sample Input：
2357
Sample Output：
<1>
  775
X  33
-----
 2325       <- Explanation: 775 * 3 (unit digit)   
2325        <- Explanation: 775 * 3 (tenth digit)
-----
25575
More explanation:
1) The input are 4 int numbers between 0 - 9
2) Using the 4 int numbers, you look for a 3 digits number(775) and a 2 digits number(33).
3) Their multiplication result is the 3rd number (25575). 
4) If all the 3 numbers digits are all from your input 4 digit numbers, then you find a solution. 
5) The most tricky part is to print everything in multiplication column method as demenstrated above.
6) Finally, you need to print out all solutions using the 4 digit numbers.
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

    // Step 1) Prepare data -------------------------

    char s[20];
    scanf("%s",s);
    
    char buffer[100]; // this is to store the 3 numbers : abc / de / result, so that I don't need to do complex math, Ican simply process char after char

    int count = 0;

    // Step 2) My main program begin ----------------

    for(int abc = 111; abc <= 999; abc++)
    for(int de = 11; de <= 99; de++) {

        //Step 2.1) tell whether abc * de = result, the 3 numbers are valid. 
        int ok = 1;

        int result = abc * de;
        sprintf(buffer, "%d%d%d", abc, de, result);
        
        for(int i = 0; i < strlen(buffer); i++) {
            if (strchr(s, buffer[i]) == NULL)
                ok = 0;
        }

        if(ok) {

            int x = abc * (de % 10);
            int y = abc * (de / 10);

            count++;
            printf("<%d>\n", count);

            // printf("%5d\n", abc);
            // printf("X%4d\n", de);
            // printf("-----\n");
            // printf("%5d\n", x);
            // printf("%4d\n", y);
            // printf("-----\n");
            // printf("%5d\n\n", result);

            printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, result);

        }
    }    
    
    printf("The number of solutions = %d\n", count);

    return 0;
}