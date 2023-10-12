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
int diameter = 0;

   int hight(TreeNode* root){
       if(root == NULL) return 0;
     int lh =  hight(root->left);
     int rh = hight(root-> right);
     diameter = max(diameter,( lh + rh)); // only add this in hight of BT code 
     return max(lh,rh) +1;
   }
    int diameterOfBinaryTree(TreeNode* root) {
        hight(root);
        return diameter;
    }
};