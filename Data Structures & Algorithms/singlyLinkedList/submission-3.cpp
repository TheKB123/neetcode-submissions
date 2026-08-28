struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};
class LinkedList {
public:
    Node dummy;
    Node* head;
    Node* current;
    LinkedList() : dummy(0), head(&dummy), current(&dummy) {}

    int get(int index) {
        if ( !head || !head->next )
            return -1;
        Node* ptr = head;
        for ( int i = 0; i <= index; i++ ) {
            if ( !ptr->next )
                return -1;
            ptr = ptr->next;
        }
        return ptr->val;
    }

    void insertHead(int val) {
        Node* aux = head->next;
        head->next = new Node(val);
        head->next->next = aux;
        if ( current == &dummy )
            current = head->next;
    }
    
    void insertTail(int val) {
        current->next = new Node(val);
        current = current->next;
    }

    bool remove(int index) {
        if ( !head || !head->next )
            return 0;
        Node* ptr = head;
        for ( int i = 1; i <= index; i++ ) {
            if ( !ptr->next->next )
                return 0;
            ptr = ptr->next;
        }
        if ( current == ptr->next )
            current = ptr;
        Node* aux = ptr->next->next;
        ptr->next = aux;
        return 1;
    }

    vector<int> getValues() {
        const Node* ptr = head->next;
        vector<int> result;
        while ( ptr ) {
            result.push_back(ptr->val);
            ptr = ptr->next;
        }
        return result;
    }
};
