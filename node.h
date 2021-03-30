struct Node
{
    int elem;
    Node *next;
    Node *cross;
    Node(int e) : elem(e), next(nullptr), cross(nullptr) {}
};

Node *dual_linked_list(Node *head);