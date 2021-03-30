#include "node.h"

Node *dual_linked_list(Node *head)
{
    Node *head2 = new Node(head->elem);
    head2->cross = head;
    if (head->next != nullptr)
    {
        if (head->next->next != nullptr)
        {
            head2->next = dual_linked_list(head->next->next);
        }
    }
    return head2;
}