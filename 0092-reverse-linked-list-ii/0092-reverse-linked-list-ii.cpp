/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(head->next==NULL)
           return head;
           else{
           ListNode*temp1=head;
            ListNode*temp2=head;
            vector<int>ans;
            while(temp1!=NULL){
               ans.push_back(temp1->val);
               temp1=temp1->next;
           }    
       
       reverse(ans.begin()+left-1,ans.begin()+right);
       int l=ans.size();
       int i=0;
       while(i<l && temp2!=NULL){
         
         temp2->val=ans[i];
         temp2=temp2->next;
         i++;
       }
    }
       return head;

    }
};