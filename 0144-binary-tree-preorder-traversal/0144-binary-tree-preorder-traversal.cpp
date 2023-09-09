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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root== NULL){
            return ans;
        }
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            // vector<int> v;
            TreeNode *tmpNode  = s.top();
            s.pop();
            ans.push_back(tmpNode->val);
            
            if(tmpNode->right != NULL){
                s.push(tmpNode->right);
            }
            if(tmpNode->left != NULL){
                s.push(tmpNode-> left);
            }
        }
        return ans;
        
    }
};