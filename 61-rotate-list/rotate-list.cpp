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
        ListNode* temp1=head;
        if(head==NULL || head->next==NULL)
        return head;
        int cnt=1;
        while(temp1->next){
            cnt++;
            temp1=temp1->next;
        }
        ListNode *tail=temp1;
        k=k%cnt;
        cnt=cnt-k;
        temp1=head;
        for(int i=1;i<cnt;i++){
            // cout<<temp1->val<<endl;
            temp1=temp1->next;
        }
        // cout<<temp1->val<<endl;
        tail->next=head;
        head=temp1->next;
        temp1->next=NULL;
        return head;
    }
};