
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(10);
    
    for(int i = 0; i < v.size(); i++) {
        v[i] = rand() % 100;
    }

    sort(begin(v), end(v));

    for(int i : v) {
        printf("%d\n", i);
    }
    
    return 0;
}