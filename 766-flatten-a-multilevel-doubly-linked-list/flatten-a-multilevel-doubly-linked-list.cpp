/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* temp=head;
        stack<Node*>s;
        while(temp){
            if(temp->child){
                if(temp->next)
                s.push(temp->next);
                temp->next=temp->child;
                temp->child=NULL;
                temp->next->prev=temp;
            }
            if(temp->next==NULL && (!s.empty())){
                temp->next=s.top();
                temp->next->prev=temp;
                s.pop();
            }
            temp=temp->next;
        }
        return head;
    }
};