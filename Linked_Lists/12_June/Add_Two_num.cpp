carry = 0

while(l1 || l2 || carry)
{
    sum = carry;

    if(l1)
    {
        sum += l1->data;
        l1 = l1->next;
    }

    if(l2)
    {
        sum += l2->data;
        l2 = l2->next;
    }

    create node(sum % 10);

    carry = sum / 10;
}