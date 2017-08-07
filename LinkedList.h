#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList
{
    public:
        //Constructor for Linked List
        LinkedList(int value);
        
        //Destructor
        ~LinkedList();

        //Add a node at a specified position
        int addAtPosition(int value, int position);
        
        void printList();

        //Append a vaue to the end of the linked list         
        void append(int value);

        //Remove a value from the linked list
        void remove(int value);

        //Get the value at that position
        int getValue(int position);
        
        //TODO: Implement reverse
        //TODO: Implement sort
    
    private:
        struct node
        {
            int value;
            node *next;
        };
 
        //Keeps track of size, size will actually be number of nodes - 1. So 
        //a list with 2 nodes, the size will actually be 1. This is to be consistent with 0 based 
        //numbering
        int sizeList;
        node *head;
        node *curr;
};

#endif
