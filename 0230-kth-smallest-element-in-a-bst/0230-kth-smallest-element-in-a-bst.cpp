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
    int count=0;
    int ans=-1;
    void InorderBst(TreeNode* root, int k){
        
        if(root==NULL){
            return;
        }
        InorderBst( root->left, k);
        count++;
        if(count==k){
            ans=root->val;
        }
        
        InorderBst( root->right, k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
 
        InorderBst(root,k);
        return ans;
    }
};