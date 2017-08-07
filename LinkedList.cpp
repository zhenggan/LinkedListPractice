#include "LinkedList.h"
#include <iostream>

//@descrip: Constructor
//@param value: value of head of list
LinkedList::LinkedList(int value)
{
    node *firstNode = new node;
    firstNode->value = value;
    firstNode->next = NULL;
    head = firstNode;
    sizeList = 0;
}

//TODO: Implement destructor
LinkedList::~LinkedList()
{
}

//@descrip: Add a node at the specified position
//@param value: value of new node
//@param position: position to insert new node at
//@param 0 if successful, -1 if not
int LinkedList::addAtPosition(int value, int position)
{
    if (position > sizeList)
    {
        std::cout << "The specified position is not available" << std::endl;
        return -1;
    }
    
    curr = head;
    for (int loop = 0; loop < position; loop++)
    {
        curr = curr->next;
    }
    
    node *newNode = new node;
    newNode->value = value;
    newNode->next = curr->next;
    curr->next = newNode;
    sizeList++;
    return 0;
}

//@descrip: prints the entire list
void LinkedList::printList()
{
    curr = head;
    while (curr != NULL)
    {
        std::cout << curr->value << " ";   
        curr = curr->next;
    }
    std::cout << std::endl;
}

//@descrip: Append a new node to the end of the list
//@param value: value of the new node
void LinkedList::append(int value)
{
    curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = new node;
    curr->next->value = value;
    curr->next->next = NULL;
    sizeList++;
}

//@descrip: Remove all nodes with a specified value
//@param value: node of value should be removed
void LinkedList::remove(int value)
{
    curr = head;
    
    //Keeps track of the previous node, so we can change its pointer when curr node is removed
    node *previousNode = curr;
    
    while (curr != NULL)
    {   
        if (curr->value == value)
        {
            //Edge case for head node
            if (curr == head)
            {
                head = curr->next;
                delete curr;
                curr = head;
                sizeList--;
            }
            else
            {
                previousNode->next = curr->next;
                delete curr;
                curr = previousNode;
                sizeList--;
            }
        }
        previousNode = curr;
        curr = curr->next;
    }
}

//@descrip: Get the value at a specified position
//@param position: position to get the value
//@return: value if successful, -1 if not
int LinkedList::getValue(int position)
{
    //If the position requested is not in the linked list, return error 
    if (position > sizeList)
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