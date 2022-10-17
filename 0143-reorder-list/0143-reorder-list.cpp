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
    ListNode* reverse(ListNode* head){
         if(head==NULL) return NULL;
         if(head->next==NULL) return head;
         ListNode* prev=head;
         ListNode* curr=head->next;
        if(curr->next==NULL){
            prev->next=NULL;
            curr->next=prev;
            return curr;
        }
        ListNode* n1=curr->next;
         curr->next=prev;
        prev->next=NULL;
        prev=curr;
        curr=n1;
    
        while(curr->next){
        ListNode* n1=curr->next;    
        curr->next=prev;
        prev=curr;
        curr=n1;
        }
       curr->next=prev;
        return curr;
        
    }
    
    void reorderList(ListNode* head) {
         ListNode* slow=head;
         ListNode* fast=head->next;
         while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b= reverse(slow->next);
        slow->next=NULL;
        
        ListNode* start=NULL;
        ListNode* tail=NULL;
        
        while(a){
                if(a){
                ListNode* n= new ListNode(a->val);
                if(start==NULL && tail==NULL){
                    start=n;
                    tail=n;
                }else{
                    tail->next=n;
                    tail=n;
                }
                a=a->next;
               }
             
             if(b){
             ListNode* newnode1= new ListNode(b->val);
             if(start==NULL && tail==NULL){
                    start=newnode1;
                    tail=newnode1;
                }else{
                    tail->next=newnode1;
                    tail=newnode1;
                }
                b=b->next;
             }
        }
        head->next=start->next;
    }
};

















