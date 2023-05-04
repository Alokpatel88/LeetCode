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
    void blanced(TreeNode*root,vector<int>sort_vec,int &i){
          if(root==NULL){
              return ;
          }
          blanced(root->left,sort_vec,i);
             root->val=sort_vec[i++];
           blanced(root->right,sort_vec,i);
     }
  public:
        void inorder(TreeNode*temp,vector<int>&sort_vec){
         if(temp==nullptr)
         return ;
         inorder(temp->left,sort_vec);
         sort_vec.push_back(temp->val);
         inorder(temp->right,sort_vec);
    }
void recoverTree(TreeNode* root) {
      vector<int>sort_vec;
      inorder(root,sort_vec);
      sort(sort_vec.begin(),sort_vec.end());
      int i=0;
        blanced(root,sort_vec,i);
    }
};