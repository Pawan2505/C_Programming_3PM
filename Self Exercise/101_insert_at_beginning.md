📝 This function does:

Creates a new node

Inserts it at the start of the linked list

Updates the head pointer

void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
