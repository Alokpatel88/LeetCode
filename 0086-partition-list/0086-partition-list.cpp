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
    ListNode* partition(ListNode* head, int x) {
        // if(head==nullptr||head->next==nullptr){
        //     return head;
        // }
        // ListNode* ptr=nullptr;
        // ListNode* prev=head;
        // ListNode* curr=head->next;
        // while(curr){
        //     if(curr->val>=x){
        //         prev=curr;
        //         curr=curr->next;
        //         continue;
        //     }
        //     if(ptr&&ptr->next==curr){
        //         ptr=curr;
        //         prev=curr;
        //         curr=curr->next;
        //         continue;
        //     }
        //     ListNode* node= curr;
        //     prev->next=curr->next;
        //     curr=curr->next;
        //     node->next=nullptr;
        //     if(ptr==nullptr){
        //         if(head->val>=x){
        //             node->next=head;
        //             head=node;
        //             ptr=head;
        //         }else{
        //             ptr=head;
        //             node->next=ptr->next;
        //             ptr->next=node;
        //             ptr=ptr->next;
        //         }
        //     }else{
        //             node->next= ptr->next;
        //             ptr->next=node;
        //             ptr=node;
        //     }


        // }
        // return head;

        ////////////////////////// another approach /////////////////////
        if(head==nullptr|| head->next==nullptr)return head;
        ListNode* slist,* blist;
        slist= new ListNode(0);
        blist= new ListNode(0);
        ListNode* s= slist;
        ListNode* b= blist;
        ListNode* temp=head;
         while(temp){
             if(temp->val>=x){
                b->next= temp;
                b=temp;
                temp=temp->next;
                b->next=nullptr;
             }else{
                s->next= temp;
                s=temp;
                temp=temp->next;
                s->next=nullptr;
             }
         }
         if(slist->next==nullptr){
             return blist->next;
         }
         if(blist->next==nullptr){
             return slist->next;
         }
         temp= slist->next;
         head= temp;
         ListNode* prev= nullptr;
         while(temp){
             prev=temp;
             temp=temp->next;
             
         }
         prev->next=blist->next;
        b=blist->next;
        while(b){
            cout<<b->val<<endl;
            b=b->next;
        }
         return head;

    }
};