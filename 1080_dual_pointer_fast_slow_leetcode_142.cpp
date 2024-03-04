/*
https://leetcode.com/problems/linked-list-cycle-ii/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while(fast != nullptr) {

            slow = slow -> next;

            if(fast -> next == nullptr) {
                return nullptr;
            }

            fast = fast -> next -> next;

            if(fast == slow) {

                /*
                As soon as fast pointer equals to slow pointer, we know there is a cycle in the list
                But the question, where is the entrance? 

                'Floyd Cycle Detection Algo'
                https://www.youtube.com/watch?v=VVFPYw8XlGo

                */

                ListNode *ptr = head;
                while(ptr != slow) {
                    ptr = ptr -> next;
                    slow = slow -> next;
                }
                return ptr;
            }
        }

    }
};