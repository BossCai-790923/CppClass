/*
https://codebreaker.xyz/problem/lvm
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
模拟一台计算机的操作

Pass by value
Pass by reference

*/

void handle_cmd(pair<string, int> cmd, stack<int>& s, int& r) {

    if(cmd.first == "PUSH") {
        s.push(cmd.second);
    }
    else if(cmd.first == "STORE") {
        r = s.top();
        s.pop();
    }
    else if(cmd.first == "LOAD") {
        s.push(r);
    }
    else if(cmd.first == "PLUS") {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        a += b;
        s.push(a);
    }
    else if(cmd.first == "TIMES") {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        a *= b;
        s.push(a);
    }    
    // Ignore IFZERO & DONE    
}

void calculate_index(pair<string, int> cmd, stack<int>& s, int& index) {
    if(cmd.first == "IFZERO") {
        int a = s.top();
        s.pop();
        if(a == 0) {
            index = cmd.second;

            return;3
        }
    }
    
    index++;
} 


int main() {
    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1044_codebreaker_lvm.txt", "r", stdin); // Remove this line before your submit

    int n;
    cin >> n;

    // step 1) Load all commands ------------------------

    /*
    because each command can possibly have an argument, so I define a pair array to store all commands
    */
    pair<string, int> cmds[n];

    string str;
    int arg;

    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str == "PUSH" || str == "IFZERO") {
            cin >> arg;
        }
        cmds[i] = make_pair(str, arg);
    }

    // step 2) mimic the steps --------------------------

    /*
    LVM requires 1 stack and 1 register
    */    
    stack<int> s; // stack
    int r;        // register

    //Program starts from index 0 -> cmds[0]

    int index = 0;
    pair<string, int> cmd = cmds[0];

    while(cmd.first != "DONE") {

        // step 2.1) handle command
         handle_cmd(cmd, s, r);

        // step 2.2) get next command index
        calculate_index(cmd, s, index);

        // step 2.3) load next command
        cmd = cmds[index];
    }

    cout << r; 

    return 0;
}