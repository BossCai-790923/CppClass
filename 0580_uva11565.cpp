#include <bits/stdc++.h>
using namespace std;


int main() {

    /*
    IMPORTANCE!! ----------------------
    For complete search question, the most important part is pruning, which is to limit your loop range.
    Here, because x < y < z
    so, x^2 <= 10000 / 3
    x < sqrt(10000 / 3)
    because x * y * z is 10000
    is max value of (x, y, z) is pow(10000, 1.0/3)
    */

    // float t = sqrt(10000 / 3);
    // printf("%f\n", t);

    // float u = pow(10000, 1.0/3); // 1/3 is 0, you must put 1.0/3 
    // printf("%f\n", u);




    freopen("0580_uva11565.txt", "r", stdin);  //DELETE ME

    int tc_count;  // number of test cases
    scanf("%d", &tc_count);

    while (tc_count--)  // shortcut to repeat until 0
    {

        // read data per test case
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int loopCount = 0;  //DELETE ME

        /*
        x + y + z = A
        x * y * z = B
        x^2 + y^2 + z^2 = C
        */
        // your algo goes here...

        bool hasSolution = false;

        for(int x = -22; x <= 22; x++) {
            for(int y = x; y <= 22; y++) {
                for(int z = y; z <= 22; z++) {

                    if(x != y
                    && x != z
                    && y != z 
                    && x + y + z == a
                    && x * y * z == b
                    && x * x + y * y + z * z == c) {
                        hasSolution = true;
                        printf("%d %d %d\n", x, y ,z);
                    }

                    loopCount++;  //DELETE ME
                }
            }
        }

        if(!hasSolution) {
            puts("No solutions");
        }

        printf("LOG - total loop count: %d\n", loopCount); //DELETE ME

    }


    return 0;
}