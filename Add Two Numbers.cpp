#include <bits/stdc++.h>
using namespace std;
Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *rev1 = num1;
    Node *rev2 = num2;
    int carry = 0;
    Node *ans = new Node(-1);
    Node *temp = ans;
    while (rev1 != NULL && rev2 != NULL)
    {
        int sum = rev1->data + rev2->data + carry;
        int val = sum % 10;
        carry = sum / 10;
        Node *n = new Node(val);
        ans->next = n;
        ans = ans->next;
        rev1 = rev1->next;
        rev2 = rev2->next;
    }

    while (rev1 != NULL)
    {
        int sum = rev1->data + carry;
        int val = sum % 10;
        carry = sum / 10;
        Node *n = new Node(val);
        ans->next = n;
        ans = ans->next;
        rev1 = rev1->next;
    }

    while (rev2 != NULL)
    {
        int sum = rev2->data + carry;
        int val = sum % 10;
        carry = sum / 10;
        Node *n = new Node(val);
        ans->next = n;
        ans = ans->next;
        rev2 = rev2->next;
    }

    if (carry)
    {
        Node *n = new Node(carry);
        ans->next = n;
        ans = ans->next;
    }
    return temp->next;
}