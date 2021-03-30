#include "node.h"

Node *dual_linked_list(Node *head)
{
    Node *head2 = new Node(head->elem);
    Node *current = head2;
    Node *traverse = head;
    int i = 0;
    while (traverse->next != nullptr)
    {
        if (i % 2 == 0)
        {
            current->elem = traverse->elem;
            current->cross = traverse;
        }
        current = current->next;
        i++;
        if (traverse->next != nullptr)
        {
            traverse = traverse->next;
        }
    }
    if (head->next == nullptr)
    {
        head2->cross == head->next;
    }
    if (head == nullptr)
    {
        head2 = nullptr;
    }
    current->next = nullptr;
    return head2;
}
