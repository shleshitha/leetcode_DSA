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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int len=0;
        while(curr){
            len++;
            curr=curr->next;
        }
        if(len-n==0)
        return head->next;
        len=len-n;
        curr=head;
        while(--len && curr){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};