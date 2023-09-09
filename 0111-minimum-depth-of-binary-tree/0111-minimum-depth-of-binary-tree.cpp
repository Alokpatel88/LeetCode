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
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        queue<TreeNode*> st;
        st.push(root);
        int cnt = 0;  // Initialize the depth counter
        
        while (!st.empty()) {
            int size = st.size(); // Get the number of nodes at the current level
            cnt++; // Increment depth when moving to the next level
            
            for (int i = 0; i < size; i++) {
                TreeNode* currNode = st.front();
                st.pop();
                
                if (currNode->left == NULL && currNode->right == NULL) {
                    return cnt; // If a leaf node is found, return the current depth as the minimum depth
                }
                
                if (currNode->right != NULL) {
                    st.push(currNode->right); // Push the right child onto the stack
                }
                
                if (currNode->left != NULL) {
                    st.push(currNode->left); // Push the left child onto the stack
                }
            }
        }
        
        return cnt; // Return the minimum depth of the binary tree
    

    }
};