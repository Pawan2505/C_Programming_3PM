// 📝 This function does:

// Reverses node links

// void reverse() {
//     Node *prev = NULL, *curr = head, *next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;
// }