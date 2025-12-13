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
    ListNode* merge(ListNode* h1, ListNode* h2){
        if(h1==NULL) return h2;
        if(h2==NULL) return h1;
        if(h1->val<h2->val){
            h1->next=merge(h1->next,h2);
            return h1;
        }
        else{
            h2->next=merge(h1,h2->next);
            return h2;
        }
    } 
    ListNode* findmid(ListNode *head){
        ListNode *slow=head, *fast=head, *prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // if(fast)
        return prev;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* mid=findmid(head);
        ListNode *h2=mid->next;
        mid->next=NULL;
                
        return merge(sortList(head),sortList(h2));
    }
};