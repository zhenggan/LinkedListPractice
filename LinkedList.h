#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class LinkedList
{
    public:
        //Constructor for Linked List
        LinkedList(int value);

        //Add a value at a position
        void addAtPosition(int value, int position);

        //Append a vaue to the end of the linked list         
        void append(int value);

        //Remove a value from the linked list
        int remove(int value);

        //Get the value at that position
        int getValue(int position);
        
        //TODO: Implement reverse
    
    private:
        struct node
        {
            int value;
            node *next;
        };
 
        //Position of the final node
        int linkedListMaxPosition;
        node *head;
        node *curr;
};

#endif
