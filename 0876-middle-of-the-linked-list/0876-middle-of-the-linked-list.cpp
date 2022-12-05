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
    
    int func(ListNode* node){
        if(node==NULL){
            return 0;
        }
        
        return 1+func(node->next);
    }
    
    ListNode* middleNode(ListNode* head) {
        int length=func(head);
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(length%2==0){
            return slow->next;
        }else{
            return slow;
        }
    }
};













