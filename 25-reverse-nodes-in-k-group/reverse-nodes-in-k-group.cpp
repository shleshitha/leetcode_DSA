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
    ListNode* revll(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* r=revll(head->next);
        head->next->next=head;
        head->next=NULL;
        return r;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy, *t=head;
        int cnt=0;
        while(t){
            cnt++;
            if(cnt==k){
                ListNode *n=t->next;
                t->next=NULL;
                t=prev->next;
                prev->next=revll(prev->next);
                t->next=n;
                cnt=0;
                prev=t;
            }
            t=t->next;
        }
        return dummy->next;
    }
};