#include <bits/stdc++.h>
using namespace std;

/*
C++ standard lib has 2 kinds of containers:
1) sequence containers: array / vector / deque / forward_list / list
2) associative containers : pair / tuple / priority_queue / map 
*/

// typedef is a way to create a new name for a type.
// This lets you have a more descriptive name.
typedef pair<int, string> person;
typedef int number;


int main() {

    /*
    
    pair is:
    1) the simplest associate container
    2) Join 2 things together.
        
    */
    // Solution 1
    person p; 
    p.first = 45;
    p.second = "John";
    cout << p.second << " is " << p.first << " years old." << endl;


    // Solution 2
    p = pair<int, string>(18, "Tom");
    cout << p.second << " is " << p.first << " years old." << endl;


    // Solution 3
    p = make_pair(28, "Billy");
    cout << p.second << " is " << p.first << " years old." << endl;



    return 0;
}