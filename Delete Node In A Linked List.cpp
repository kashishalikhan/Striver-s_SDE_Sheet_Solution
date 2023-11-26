#include <bits/stdc++.h>
using namespace std;
void deleteNode(LinkedListNode<int> *node)
{

    LinkedListNode<int> *nodeDel = node->next;

    LinkedListNode<int> *nextx_next = node->next->next;

    node->data = node->next->data;

    node->next = nextx_next;

    delete nodeDel;
}