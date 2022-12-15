/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    private:
        void postorderHelper(TreeNode*root,vector<int> &v)
        {
            if (root!=NULL)
            {
                postorderHelper(root->left, v);
                postorderHelper(root->right, v);
                v.push_back(root->val);
            }
            return;
        }

    public:
        vector<int> postorderTraversal(TreeNode *root)
        {
            vector<int> v;

            postorderHelper(root, v);
            return v;
        }
};