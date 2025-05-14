class MyLinkedList {
public:
    struct Node
    {
        int val;
        Node* next;
        Node(int x)
        {
            val = x;
            next = nullptr;
        }
    };
    Node* head;
    int size;
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node* temp = head;
        for(int i = 0; i < index; i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* node = new Node(val);
        if(head == nullptr) head = node;
        else
        {
            node->next = head;
            head = node;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        if(head == nullptr) head = node;
        else
        {
            Node* curr = head;
            while(curr->next)
            {
                curr = curr->next;
            }
            curr->next = node;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* node = new Node(val);
        if(index < 0 || index > size) return;
        if(index == 0)
        {
            addAtHead(val);
            return;
        }
        else
        {
            Node* temp = head;
            for(int i = 0; i < index-1; i++)
            {
                temp = temp->next;
            }
            node->next = temp->next;
            temp->next = node;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        Node* temp;
        if(index == 0)
        {
            temp = head;
            head = head->next;
        }
        else
        {
            Node* curr = head;
            for(int i = 0; i < index-1; i++) curr = curr->next;
            temp = curr->next;
            curr->next = temp->next;
        }
        delete temp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */