class Node {
public:
    int val;
    Node* next;
    Node(int v) {
        val = v;
        next = NULL;
    }
};

class MyLinkedList {
public:
    Node *head, *tail;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    int get(int index) {
        int cnt = 0;
        Node* t = head;
        while (cnt < index && t) {
            t = t->next;
            cnt++;
        }
        if (t && cnt == index)
            return t->val;
        return -1;
    }

    void addAtHead(int val) {
        Node* t = new Node(val);
        t->next = head;
        head = t;
        if (!tail) tail = head;
    }

    void addAtTail(int val) {
        Node* t = new Node(val);
        if (!head) {
            head = tail = t;
        } else {
            tail->next = t;
            tail = t;
        }
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        int cnt = 0;
        Node* t = head;
        while (cnt < index - 1 && t) {
            t = t->next;
            cnt++;
        }
        if (!t) return; // out of bounds
        Node* newnode = new Node(val);
        newnode->next = t->next;
        t->next = newnode;
        if (newnode->next == nullptr) tail = newnode;
    }

    void deleteAtIndex(int index) {
        if (!head) return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            if (!head) tail = nullptr;
            delete temp;
            return;
        }
        int cnt = 0;
        Node* t = head;
        while (cnt < index - 1 && t) {
            t = t->next;
            cnt++;
        }
        if (!t || !t->next) return;
        Node* temp = t->next;
        t->next = temp->next;
        if (t->next == nullptr) tail = t;
        delete temp;
    }
};
