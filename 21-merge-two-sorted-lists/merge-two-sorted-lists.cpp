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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // don't modify actual Data;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2; 
        ListNode* newHead = new ListNode(); 
        ListNode* newtemp = newHead;
        if(temp1 == nullptr ){
            return temp2;
        }
         if( temp2 == nullptr){
            return temp1;
        }

        while(temp1  != NULL && temp2 != NULL){
            if(temp1 -> val <= temp2->val){
                newtemp->next = temp1;
                temp1 = temp1->next;
            }

            else{
                newtemp->next = temp2;
                temp2 = temp2->next;
                // cout<<" 2 ";
            }
            newtemp = newtemp-> next;
        }
        if(temp1){
            newtemp->next = temp1; 
        }

        if(temp2){
           newtemp->next = temp2;
        }
        return newHead->next;
    }
};