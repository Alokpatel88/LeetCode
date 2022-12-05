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
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>v;
        if(root==NULL){
            return v;
            
        }
        stack<TreeNode*>s;
        TreeNode* curr=root;
        
        while(true){
            if(curr!=NULL){
                s.push(curr);
                curr=curr->left;
            }
            else{
                if(s.empty()==true)
                    break;
                
                curr=s.top();
                s.pop();
                v.push_back(curr->val);
                curr=curr->right;
                
            }
        }
        return v;
        
        
        //************recursive**************************//
        // inorderTraversal( root->left);
        // v.push_back(root->val); // print(root->val)
        // inorderTraversal( root->right);
        
        //******************************************************//
        
       
        
        
        
    }
};