#include "node.h"

Node *dual_linked_list(Node *head)
{
    Node *cross = new Node(head->elem);
    Node *head2 = new Node(cross->elem);
    head = head->next;
    while (head->next != nullptr)
    {
        head = head->next;
        cross = cross->next;
        cross->elem = head->elem;
        head2 = head2->next;
        head2->elem = cross->elem;
        head = head->next;
    }
    return head2;
}