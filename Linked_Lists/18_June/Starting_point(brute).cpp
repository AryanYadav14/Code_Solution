Node* startingNode(Node* head)
{
    unordered_map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL)
    {
        if(visited[temp] == true)
        {
            return temp;
        }

        visited[temp] = true;

        temp = temp->next;
    }

    return NULL;
}