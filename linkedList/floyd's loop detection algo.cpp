Node* FloydLoopDetection(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while (fast != NULL && fast -> next != NULL){
        fast = fast -> next;
        if(fast -> next != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast){
            cout<<"present at "<<slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}