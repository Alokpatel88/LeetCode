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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        if(head==NULL)
        return NULL;
        ListNode* temp=head;
        for( temp=head;temp!=NULL;temp=temp->next)
        {
            v.push_back(temp->val);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
       // cout<<v.size();
        
       ListNode* newhead = nullptr;
       ListNode * tail = newhead;
       for(int i=0;i<v.size();i++)
       {   
           ListNode *curr=new ListNode(v[i]);
           if(newhead == NULL){
               newhead = curr;
               tail = newhead;
           }
           else{
              tail->next = curr;  
              tail=curr;  
           }
        }
        return newhead;
    }
};