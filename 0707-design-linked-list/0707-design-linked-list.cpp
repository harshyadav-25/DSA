class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = tail = NULL;
        size = 0;
        
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        if(index == 0) return head->val;
        if(index == size - 1) return tail->val;
        Node* temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        return temp->val;
        
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;

        }
        size++;
        
        
    }
    
    void addAtTail(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
        
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size) return;
        if(index == 0){
            addAtHead(val);
            return;
        }
        if(index == size){
            addAtTail(val);
            return;

        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
        
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            if(size == 1) tail = NULL;
        }
        else{
            Node* temp = head;
            for(int i = 0; i < index - 1; i++){
                temp = temp->next;
                
            }
            Node* curr = temp->next;
            temp ->next = temp->next->next;
            delete(curr);
            if(index == size -1) tail = temp;
        }
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