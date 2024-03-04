#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

vector<int> path;

void pre_order(TreeNode* cur) {

    // base case
    if(cur == NULL) {
        return;
    }

    // recursive call
    path.push_back(cur -> val); // current node

    // choices
    pre_order(cur -> left);     // left son
    pre_order(cur -> right);    // right son

}



int main() {

    // prepare data ---------------------------------

    /*
        1
    2       3
 4   5    6    7    
    */

   TreeNode left_left = {4, NULL, NULL};
   TreeNode left_right = {5, NULL, NULL};
   TreeNode left = {2, &left_left, &left_right};

   TreeNode right_left = {6, NULL, NULL};
   TreeNode right_right = {7, NULL, NULL};
   TreeNode right = {3, &right_left, &right_right};

   TreeNode root = {1, &left, &right};

    // algo ------------------------
   pre_order(&root);
   
   // print result ------------------

   for(int i : path) {
    printf("%d ", i);
   }



    return 0;
}