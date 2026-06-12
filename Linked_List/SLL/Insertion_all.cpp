
Node* insertAtHead(Node* head, int value)
{
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;

    return head;
}

Node* insertAtTail(Node* head, int value)
{
    Node* newNode = new Node(value);

    if(head == nullptr)
        return newNode;

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

Node* insertAtK(Node* head, int value, int k)
{
    if(k == 1)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp != nullptr)
    {
        if(cnt == k - 1)
        {
            Node* newNode = new Node(value);

            newNode->next = temp->next;
            temp->next = newNode;

            break;
        }

        temp = temp->next;
        cnt++;
    }

    return head;
}
```
