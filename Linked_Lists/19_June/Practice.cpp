
// Node* sort012(Node* head)
// {
//     int cnt0 = 0;
//     int cnt1 = 0;
//     int cnt2 = 0;

//     Node* temp = head;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//             cnt0++;
//         else if (temp->data == 1)
//             cnt1++;
//         else
//             cnt2++;

//         temp = temp->next;
//     }

//     temp = head;

//     while (cnt0)
//     {
//         temp->data = 0;
//         cnt0--;
//         temp = temp->next;
//     }

//     while (cnt1)
//     {
//         temp->data = 1;
//         cnt1--;
//         temp = temp->next;
//     }

//     while (cnt2)
//     {
//         temp->data = 2;
//         cnt2--;
//         temp = temp->next;
//     }

//     return head;
// }



// Node* removeNthFromEnd(Node* head, int n){
//     Node* temp = head;
//     cnt=0;
//     while(temp!=null){
//         cnt++;
//         temp=temp->next;
//     }

//     temp = head;
//     int length = cnt;
//     int k=0;
//     int stop = length - n;
//     while(temp!=null){
//         if(k==stop){
//             temp->next = temp->next->next;
//             break;
//         }
//         k++;
//         temp = temp->next;
//     }
// }



// bool isPalindrome(Node* head){
//     stack<int> st;

//     Node* temp = head;
//     while(temp!=null){
//         st.push(temp->data);
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp!=null){
//         if(temp->data!=st.top()){
//             return false;
//             break;
//         }
//         st.pop();
//         temp = temp->next;
//     }
// }




bool detectLoop(Node* head){
    Node* temp = head;

    Node* slow = head;
    Node* fast = head;

    while(temp!=null){

        slow = slow->next;
        fast = fast->next->next;


        if(slow==fast){
            return true;
        }
        return false;

    }
}