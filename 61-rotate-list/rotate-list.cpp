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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail=head;
        int len=1;
        while(tail && tail->next){
            len++;
            tail=tail->next;
        }
        k=k%len;
        k=len-k;
        tail->next=head;
        ListNode* t=head;
        while(--k){
            t=t->next;
        }
        head=t->next;
        t->next=NULL;
        return head;
    }
};