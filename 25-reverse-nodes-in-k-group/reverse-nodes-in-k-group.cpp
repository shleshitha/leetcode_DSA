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
     ListNode* reversell(ListNode* head) {
        if(!head || head->next==NULL)
        return head;
        ListNode* temp = reversell(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy=new ListNode(-1);
        ListNode* temp=head, *prev=head,*temp2=dummy;
        int cnt=1;
        while(temp){
            if(cnt==k){
                ListNode* next=temp->next;
                temp->next=NULL;
                temp2->next=reversell(prev);
                temp2=prev;
                prev=next;
                temp=next;
                cnt=1;
            }
            else{
                cnt++;
                temp=temp->next;
            }
        }
        temp2->next=prev;
        return dummy->next;
    }
};