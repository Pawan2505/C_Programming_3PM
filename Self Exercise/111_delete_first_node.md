📝 This function does:

Deletes first node

Updates head pointer

void deleteFirst() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}
