#include <bits/stdc++.h>
using namespace std;


/*
There are n blocks [0, n-1]
1) move a onto b: clear all above a,    clear all above b,  put a on top of b
2) move a over b: clear all above a,                        put a on top of b
3) pile a onto b:                       clear all above b,  put a on top of b
4) pile a over b:                                           put a on top of b
5) quit
onto : clear all above b
over : do nothing about b
move : clear all above a
pile : do nothing aboue a
1) we know max there are 25 columns -> so we can use static array
2) we don't know the height of each column -> so we can use vector
*/
int n;

vector<int> pile[25]; // main data structure


// find p & h of number a in pile
void find_block(int a, int& p, int& h) {
    for(p = 0; p < n; p++) {    // not int p
        for(h = 0; h < pile[p].size(); h++) { //not int h
            if(pile[p][h] == a) {
                return;
            }
        }
    }
}


// clear pile[p] everything above h(exclusive)
void clear_above(int p, int h) {
    for(int i = h+1; i < pile[p].size(); i++) {
        int b = pile[p][i];
        pile[b].push_back(b);
    }
    pile[p].resize(h+1);
}

// move all blocks in pile p, start from index h(inclusive) on top of pile p2
void pile_onto(int p, int h, int p2){
    for(int i = h; i < pile[p].size(); i++) {
        pile[p2].push_back(pile[p][i]);
    }
    // pile[p].resize(h-1); 
    pile[p].resize(h); 
    /*
    Mr Fan: 2022-01-15 10:40AM
    I made a mistake here, I said h-1, which is wrong. It should be h. 
    Because h is 0 based, for example, if we want to move away from h = 4, then we still have indexes=0,1,2,3 (4 values) left, which equals to h
    so, we should resize(h)， instead of (h-1)
    Sorry!
    */
}

void print_status() {
    for(int i = 0; i < n; i++) {
        printf("%d:", i);
        for(int j = 0; j < pile[i].size(); j++) {
            printf(" %d", pile[i][j]);
        }
        printf("\n");
    }
}


int main() {

    freopen("0740_uva00101.txt", "r", stdin); // delete me later

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        pile[i].push_back(i);
    }

    string s1, s2;
    int a, b;

    while(cin >> s1 >> a >> s2 >> b) {

        /*
        
        1) cin >> s1 has a return value -> its return value is cin
        so, you can chain them together
        2) cin >> s1 >> a >> s2 >> b has a return value -> cin
        3) cin can be casted to a boolean value
        if cin reads 4 values successfully, cin is true
        if cin doesn't read 4 values successfully, cin is false
       
        
        */

        // printf("%s %d %s %d\n", s1.c_str(), a, s2.c_str(), b);
        // cout << s1 << " " << a << " " << s2 << " " << b << endl;

        /*
        step 1) find postion of a & b
        step 2) if onto -> clear all above b
        step 3) if move -> clear all above a
        step 4) move all including a to b
        */

        int pa, ha, pb, hb;
        // a -> [pa, ha] -> pile[pa][ha]
        // b -> [pb, hb] -> pile[pb][hb]

        // step 1)
        find_block(a, pa, ha);
        find_block(b, pb, hb);

        if(pa == pb) {
            continue;
        }

        // step 2) 
        if(s2 == "onto") {
            clear_above(pb, hb);
        }

        // step 3) 
        if(s1 == "move") {
            clear_above(pa, ha);
        }

        // step 4) 
        pile_onto(pa, ha, pb);

    }

    print_status();

    return 0;
}