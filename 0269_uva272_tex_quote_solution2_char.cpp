/*
Requirement:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

    freopen("0268_input.txt", "r", stdin);

    int c, q = 1;

    while((c = getchar()) != EOF) {

        if (c == '"') {
            printf("%s", q ? "``":"''");
            q = !q;
        }
        else {
            printf("%c", c);
        }
    }


    return 0;
}