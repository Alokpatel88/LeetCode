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
    bool isPalindrome(ListNode* head) {
       if(head == NULL) 
          return true;

          ListNode* newHead = new ListNode(head->val);
           ListNode* currNode = newHead;
            ListNode* temp  = head-> next;
            while( temp != NULL){   
                currNode-> next = new ListNode(temp-> val);
                currNode = currNode-> next;
                 temp = temp->next;
            }
            
        ListNode* prev = NULL; 
        ListNode* curr = head;
        ListNode* next = head->next;
        while(next != NULL){
            curr-> next = prev;
            prev = curr;
            curr = next;
            next = next-> next;
        }
        curr-> next = prev;

        ListNode* temp1 = curr;
        ListNode* temp2 = newHead;
        while(temp1 != NULL){
            if(temp1-> val != temp2-> val){
                return false;
            }
             temp1= temp1-> next;
             temp2 = temp2-> next;
        }
        return true;
    }
};