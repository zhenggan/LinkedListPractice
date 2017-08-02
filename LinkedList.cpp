#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(int value)
{
    node *firstNode = new node;
    firstNode->value = value;
    firstNode->next = NULL;
    head = firstNode;
}

//TODO: Implement
void LinkedList::addAtPosition(int value, int position)
{
    
}

//TODO: Implement
void LinkedList::append(int value)
{
   
}

//TODO: Implement
int LinkedList::remove(int value)
{
    return 0;
}

int LinkedList::getValue(int position)
{
    //If the position requested is not in the linked list, return error 
    if (position > linkedListMaxPosition)
    {
        return -1;
    }
    
    curr = head;
    int loop = 0;
    while (loop <= position)
    {
        if (loop == position)
        {
            return curr->value;   
        }
        loop++;
        curr = curr->next;
    }
    
    //If function hasn't returned value by now, return error
    return -1;
}