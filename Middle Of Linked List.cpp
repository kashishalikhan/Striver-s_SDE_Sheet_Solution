#include <bits/stdc++.h>
using namespace std;
Node *findMiddle(Node *head)
{
    if (head->next == NULL || head == NULL)
        return head;
    Node *fast = head, *slow = head;
    while (fast->next != NULL || fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next != NULL)
            fast = fast->next;
        if (fast->next == NULL || fast == NULL)
            return slow;
    }
}