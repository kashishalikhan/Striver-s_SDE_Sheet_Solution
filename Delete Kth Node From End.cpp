#include <bits/stdc++.h>
using namespace std;
Node *removeKthNode(Node *head, int K)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cnt = cnt - K;
    if (cnt == 0)
        return head->next;
    temp = head;
    while (cnt != 1)
    {
        temp = temp->next;
        cnt--;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    del->next = NULL;
    return head;
}