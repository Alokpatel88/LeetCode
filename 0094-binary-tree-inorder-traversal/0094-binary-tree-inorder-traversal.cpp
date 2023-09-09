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
void inordertrv(TreeNode*root, vector<int>&ans){
    if(root==NULL){
        return ;
    }
        inordertrv(root->left,ans);
        ans.push_back(root->val);
        inordertrv(root->right,ans);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans; 
        
        // TreeNode* tmp = root;
        if(root==NULL){
            return ans;
        }
       inordertrv(root,ans);
        return ans;
    }
};