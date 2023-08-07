class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)    return NULL;
        if(!head->next)    return head;;

        ListNode *p = head , *q = head->next;
        while(q)
        {
            int temp = q->val;
            q->val = p->val;
            p->val = temp;

            p = q->next;
            q = p ? p->next : 0;
        }
        return head;
        
    }
};