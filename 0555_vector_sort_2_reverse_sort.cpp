#include <bits/stdc++.h>
using namespace std;


int main() {

    freopen("0490.txt", "r", stdin);

    // PREPARE DATA BEGIN ---------------------
    /*
    n - n marbles
    q - q questions
    x - the number I want to find
    a - all the sorted marbles
    k - case id
    */
    int n, q, x, a[10000], k = 0;

    while (scanf("%d%d", &n, &q) == 2 && n) {

        printf("CASE# %d:\n", ++k);

        for(int i =0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        sort(a, a + n);

        while(q--) {

            scanf("%d", &x);
            int p = lower_bound(a, a + n, x) - a;
            if(a[p] == x) {
                printf("%d found at %d\n", x, p + 1);
            }
            else {
                printf("%d not found\n", x);
            }
        }
    }




    return 0;
}