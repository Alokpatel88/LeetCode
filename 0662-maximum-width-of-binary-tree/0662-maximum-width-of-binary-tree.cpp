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
    int widthOfBinaryTree(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int ans=0;
    queue<pair<TreeNode*, int>>q;
    q.push({root, 0});
    while(!q.empty()){
        int len=q.size();
        int left=q.back().second;
        int right=q.front().second;
        for(int i=0; i<len; i++){
            root=q.front().first;
            int ind=q.front().second-left;
            q.pop();
            if(root->left!=NULL){q.push({root->left, ind*2+1});}
            if(root->right!=NULL){q.push({root->right, ind*2+2});}
        }
        ans=max(ans, left-right+1);
    }
    return ans;    
    }
};

///****************TLE**************************//
// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//             int ans=0;
//             queue<pair<TreeNode*,int>>q;
//             q.push({root,0});
//             while(!q.empty()){
//                 int size=q.size();
//                 int minIdx=q.front().second;
//                 int first,last;
//                 for(int i=0;i<size;i++){
//                     int idx=q.front().second-minIdx;
//                     TreeNode* node=q.front().first;
//                     q.pop();
//                     if(i==0)
//                  first=idx;
//                     if(i==size-1)
//                    last=idx;
                   
//                     if(node->left){
//                         q.push({root->left,2*i+1});
//                     }
//                     if(q.front().first->right){
//                         q.push({root->right,2*i+1});
//                     }
//                 }
//                  ans=max(ans, last - first + 1);
//             }
//            return ans;
//     }
// };