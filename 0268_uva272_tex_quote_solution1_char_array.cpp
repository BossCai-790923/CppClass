
/*
Requirement:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
*/

#include <bits/stdc++.h>
using namespace std;


int main() {

    freopen("0268_input.txt", "r", stdin);

    char line[1024];

    bool startQuote = true;

    while(fgets(line, 1024, stdin) != NULL) {

        for(int i = 0; i < strlen(line); i++) {
            if(line[i] == '"') {
                if(startQuote) {
                    printf("%s", "``");
                    startQuote="False";
                }
                else {
                    printf("%s", "''");
                    startQuote="True";
                }
            }
            else {
                printf("%c", line[i]);
            }
        }
    }
    return 0;
}