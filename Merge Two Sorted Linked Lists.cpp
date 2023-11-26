#include <bits/stdc++.h>
using namespace std;
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // Write your code here.
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;

    if (first->data <= second->data)
    {
        first->next = sortTwoLists(first->next, second);
        return first;
    }

    else
    {
        second->next = sortTwoLists(second->next, first);
        return second;
    }
}