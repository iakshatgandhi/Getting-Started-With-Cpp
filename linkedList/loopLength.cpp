int countNodesinLoop(struct Node *head)
{
    if (head == NULL)
        return 0;

    Node* slow = head;
    Node* fast = head;
    bool loopExists = false;
    int loopLength = 0;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            loopExists = true;
            break;
        }
    }

    if (loopExists) {
        // Count the length of the loop
        do {
            loopLength++;
            slow = slow->next;
        } while (slow != fast);
    }

    return loopLength;
}