#include "node.h"

Node* dual_linked_list(Node* head) {
    if(head == nullptr) return nullptr;

    Node* head2 = new Node(head->elem);
    head2->cross = head;
    Node* traverse = head->next;
    Node* current = head2;
    int counter = 1;
    while(traverse != nullptr) {
        if(counter % 2 == 0) {
            Node* node = new Node(traverse->elem);
            node->cross = traverse;
            current->next = node;
            current = node;
        }
        traverse = traverse->next;
        ++counter;
    }
    return head2;
}