/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int findsum(TreeNode * root, int &sum){
        if(root == NULL ) return 0;
        int lhs = max(0,findsum(root->left, sum));
        int rhs = max(0, findsum(root->right , sum));


        sum = max(sum , lhs + rhs + root->val); // only add (+ root->val in maxium path of BT code)
        // and this |
       //           |
        //          ^
        // 1 -- > root->val (diff from hight of BT)
        return root->val + max(lhs, rhs);

    }
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        findsum(root, sum);
        return sum;
    }
};