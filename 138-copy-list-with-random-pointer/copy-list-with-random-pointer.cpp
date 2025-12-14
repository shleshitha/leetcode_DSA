/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return head;
        Node *t=head;
        while(t){
            Node *n=new Node(t->val);
            n->next=t->next;
            t->next=n;
            t=n->next;
        }
        t=head;
        while(t){
            if(t->random){
                t->next->random=t->random->next;
            }
            t=t->next->next;
        }
        Node *h2=head->next, *t2=h2;
        t=head;
        while(t){
            t->next=t->next->next;
            t=t->next;
            if(t2->next)
            {t2->next=t2->next->next;
            t2=t2->next;}
            
        }
        return h2;

    }
};