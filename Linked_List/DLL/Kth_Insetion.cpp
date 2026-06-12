Node* insertAtK(Node* head, int val, int k)
{
    if(k <= 0)
        return head;

    // Insert at head
    if(k == 1)
    {
        Node* newNode = new Node(val);

        if(head != NULL)
        {
            newNode->next = head;
            head->prev = newNode;
        }

        return newNode;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp != NULL && cnt < k - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Invalid k
    if(temp == NULL)
        return head;

    // Insert at tail
    if(temp->next == NULL)
    {
        Node* newNode = new Node(val);

        temp->next = newNode;
        newNode->prev = temp;

        return head;
    }

    // Insert in middle
    Node* front = temp->next;

    Node* newNode = new Node(val);

    newNode->prev = temp;
    newNode->next = front;

    temp->next = newNode;
    front->prev = newNode;

    return head;
}