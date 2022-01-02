#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}
int main()
{
    // arrays are single blocks of memory with partitions
    // linked lists are multiple blocks of memory linked to each other
    // limitations of arrays =>
    // fixed size
    // contiguous block of memory
    // inserting and deleting aint easy
    //pros of linked lists
    // size can be modified
    // non-contiguos memory
    // insertion and deletion at any point is easy
    return 0;
}