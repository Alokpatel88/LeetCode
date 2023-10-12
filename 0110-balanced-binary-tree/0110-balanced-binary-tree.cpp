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
     int ans = true;
    int hight(TreeNode  * root){
        if(root== NULL) return 0;

        int lh = hight(root->left);
        int rh = hight(root->right);
        return max(lh , rh) +1;
    }

     bool inorder(TreeNode * root){
         if(root == NULL ) return true;

         inorder(root -> left);

        int lh = hight(root->left);
        int rh = hight(root->right);

        if(abs(lh-rh) > 1){
            ans = false;
            return false;
        } 

          inorder(root->right);

          return true;

     }

    bool isBalanced(TreeNode* root) {
        inorder(root);
       return ans;
    }
};