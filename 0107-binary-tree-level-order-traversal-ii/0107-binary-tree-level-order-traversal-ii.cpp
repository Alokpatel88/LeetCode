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
  public: vector < vector < int >> levelOrderBottom(TreeNode * root) {
   vector<vector<int>>ans;
        
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        
        
        while(!q.empty()){
            
            int size=q.size();
            vector<int >level;
            for(int i=0;i<size;i++){
                
               TreeNode* tempnode=q.front();
                
                level.push_back(tempnode->val);

                q.pop();
                if(tempnode->left!=NULL)
                    q.push(tempnode->left);
                   
                 if(tempnode->right!=NULL)
                    q.push(tempnode->right);
            }
            ans.push_back(level);
        }
            vector<vector<int>>ans2;
            for(auto it: ans){
                ans2.insert(ans2.begin(),it);
            }
        return ans2;
        

  }
};