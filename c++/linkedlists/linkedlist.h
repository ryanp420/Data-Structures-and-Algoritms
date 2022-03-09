#ifndef NODE
#define NODE


class Node
{
    public: 
        int value; 
        Node* next; //holds the address of the next pointer 
        void printNode(Node* n); 
        void insertFront(Node** head, int newValue); 


        void insertBack(Node** head, int newValue); 
        void insertAfter(Node* previous, int newValue); 

}; 

#endif 