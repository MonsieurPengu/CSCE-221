#include <iostream>

#include "node.h"

std::ostream &print_list(std::ostream &os, Node *head, Node *head2, int spacing = 2);

int main()
{
    Node head(1);
    head.next = new Node(2);
    head.next->next = new Node(3);
    head.next->next->next = new Node(4);

    Node* head2 = dual_linked_list(nullptr);

    print_list(std::cout, nullptr, head2);
}

/**
 * @brief Pretty print the crossed lists
 * 
 * @param os ostream in which to print
 * @param head start of full list
 * @param head2 start of skipped list
 * @param spacing number of skips
 * @return os after printing
 */
std::ostream &print_list(std::ostream &os, Node *head, Node *head2, int spacing)
{
    // Print out head2
    Node *h2 = head2;
    while (h2)
    {
        os << h2->elem << '-';
        for (int i = 0; i < spacing; ++i)
        {
            os << '-';
        }
        h2 = h2->next;
    }
    os << 'X' << std::endl;
    // Print out crosses, * if value mismatch
    Node *h = head;
    h2 = head2;
    while (h && h2)
    {
        if(h->elem == h2->elem) {
            os << '|';
        } else {
            os << '*';
        }
        if (h2->next)
        {
            os << ' ';
            for (int i = 0; i < spacing; ++i)
            {
                os << ' ';
            }
        }
        h = h->next;
        if(h) h = h->next;
        h2 = h2->next;
    }
    os << std::endl;
    // Print out head
    h = head;
    while (h)
    {
        os << h->elem << '-';
        h = h->next;
    }
    os << 'X' << std::endl;
    // Print out pipes
    h = head;
    while (h)
    {
        os << '|';
        if (h->next)
        {
            os << ' ';
        }
        h = h->next;
    }
    os << std::endl;
    // Print out X's
    h = head;
    while (h)
    {
        os << 'X';
        if (h->next)
        {
            os << ' ';
        }
        h = h->next;
    }
    os << std::endl;
    return os;
}