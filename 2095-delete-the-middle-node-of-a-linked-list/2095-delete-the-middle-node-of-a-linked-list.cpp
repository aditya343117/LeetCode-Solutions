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
    int func(ListNode* head){
        if(head==NULL) return 0;
        
        return 1+func(head->next);
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        int length=func(head);
        if(length%2==0){
            slow->next=slow->next->next;
        }else{
            slow->val=slow->next->val;
            slow->next=slow->next->next;
        }
        return head;
    }
};