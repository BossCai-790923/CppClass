#include <bits/stdc++.h>
using namespace std;

/*
C++ Standard Library
It contains 3 parts:
1) containers  : array / vector / deque / list / set / map       -> same as python
2) algorithms  : counting / seraching / sorting / transforming   -> very efficient / super fast
3) iterators:  : is a bridge which joins containers and algorithms 
*/


int main() {

    // 1) container from C++ stdlib
    vector<int> x{0, 1, 8, 13, 5 , 2, 3};
    x[0] = 21;
    x.push_back(1);


    // 2) sort algo from C++ stdlib

    sort(x.begin(), x.end());

    cout << "Printing " << x.size() << endl;
    
    for(auto number: x)
    cout << number << endl;




    return 0;
}