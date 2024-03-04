#include <bits/stdc++.h>
using namespace std;
#define ll long long

// copy over
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public: 

    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *p = head, *q = head;
        return q;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode *p = head, *q = head;
        return q;
    }

    /*
    I let the fast pointer runs in the front, slow pointer runs at the back
    if fast & slow meet, meaning, there is cycle.
    */
    bool hasCycle(ListNode* head) { 
        return false;
    }

};


int main() {


    ListNode *head = new ListNode(10);
    ListNode *tail = head;

    head = new ListNode(9, head);
    head = new ListNode(8, head);
    head = new ListNode(7, head);
    head = new ListNode(6, head);
    head = new ListNode(5, head);
    head = new ListNode(4, head);
    head = new ListNode(3, head);
    head = new ListNode(2, head);
    head = new ListNode(1, head);
    head = new ListNode(0, head);

    /*
    0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 0
    11 nodes
    */

    Solution s;

    // Show me the last 3rd value
    ListNode *res = s.getKthFromEnd(head, 3);
    cout << res -> val << endl;

    res = s.middleNode(head);
    cout << res -> val << endl;


    bool hasCycle = s.hasCycle(head);
    cout << hasCycle << endl; // 0

    tail -> next = head;
    hasCycle = s.hasCycle(head);
    cout << hasCycle << endl; // 1

}
