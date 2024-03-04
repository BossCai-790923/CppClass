#include <bits/stdc++.h>
using namespace std;


/*
queue is FIFO - First In First Out
stack is LIFO - Last In First Out
*/



int main() {

    /*
    
    4 main operations
    push  - enqueue
    pop   - dequeue 
    front - returns head of queue
    empty - tells you whether it is mepty or not
    size  -  
        
    */

    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(20);

    while(!q.empty()) {
        cout << q.front() << ", size is: " << q.size() << endl;
        q.pop();
    }

    return 0;
}