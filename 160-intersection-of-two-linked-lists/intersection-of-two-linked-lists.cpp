/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode * head){
        if(head==NULL) return 0;
        return len(head->next)+1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=len(headA);
        int lenB=len(headB);
        if(lenA<lenB)
        return getIntersectionNode(headB,headA);
        ListNode* t1=headA, *t2=headB;
        for(int i=0;i<lenA-lenB;i++)
        t1=t1->next;
        while(t1 && t2 && t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
};