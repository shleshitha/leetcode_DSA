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
    ListNode* findmid(ListNode* head){
        ListNode *slow=head, *fast=head,*prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        if(fast){    
            return slow->next;
        }
        return slow;
    }
    ListNode* revll(ListNode * head){
        if(head==NULL || head->next==NULL) return head;
        ListNode *rh=revll(head->next);
        head->next->next=head;
        head->next=NULL;
        return rh;
    }
    bool checkPalindrome(ListNode* h1, ListNode *h2){
        ListNode *t1=h1, *t2=h2;
        while(t1 && t1->val==t2->val){
            t1=t1->next;
            t2=t2->next;
        }
        return t1==NULL;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* head2=findmid(head);
        // ListNode *head2=mid->next;
        // mid->next=NULL;
        head2=revll(head2);
        return checkPalindrome(head,head2);
    }
};