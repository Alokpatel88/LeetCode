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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            // vector<int> v;
            int maxi = INT_MIN;
            for(int i = 0 ; i < n ; i++){
                 TreeNode * temp = q.front();
                // v.push_back(temp->val);
                maxi = max(maxi,temp->val);
                 q.pop();   
                if(temp-> right) 
                   q.push(temp->right); 
                if(temp->left)
                   q.push(temp->left);
                  
            }
            ans.push_back(maxi);
        }
        return ans;

    }
};