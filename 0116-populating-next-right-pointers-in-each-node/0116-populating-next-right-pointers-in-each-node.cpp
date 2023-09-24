/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node *> q;
        q.push(root);
        if (q.front() == NULL)
        {
            return root;
        }
        Node * prev=NULL;
        int size = 0;
        while (!q.empty())
        {
            size = q.size();
            prev=NULL;
            for (int i = 0; i < size; i++)
            {
                if(prev!=NULL)
                {
                    prev->next=q.front();
                }
                if (q.front()->left != NULL)
                    q.push(q.front()->left);
                if (q.front()->right != NULL)
                    q.push(q.front()->right);
                prev=q.front();
                q.pop();
            }
            prev->next=NULL;
        }

        return root;
    }
};