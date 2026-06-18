Node* reverseLL(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL)
    {
        Node* front = curr->next;

        curr->next = prev;

        prev = curr;
        curr = front;
    }

    return prev;
}

Node* addOne(Node* head)
{
    head = reverseLL(head);

    Node* temp = head;

    int carry = 1;

    while(temp != NULL)
    {
        temp->data = temp->data + carry;

        if(temp->data < 10)
        {
            carry = 0;
            break;
        }
        else
        {
            temp->data = 0;
            carry = 1;
        }

        temp = temp->next;
    }

    if(carry == 1)
    {
        Node* newNode = new Node(1);

        head = reverseLL(head);

        newNode->next = head;

        return newNode;
    }

    head = reverseLL(head);

    return head;
}