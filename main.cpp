#include <iostream>
#include "LinkedList.h"

int main()
{
    //Testing
    LinkedList list(5);
    list.printList();
    list.append(9);
    list.printList();
    list.append(6);
    list.printList();
    list.addAtPosition(7, 1);
    list.printList();
    list.remove(7);
    list.printList();
    
    return 0;
}
