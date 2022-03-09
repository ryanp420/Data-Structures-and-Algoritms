#include <iostream>
#include "linkedlist.h"
using std::cout; 
using std::endl; 
using std::cin; 

int main()
{
    //Creating Pointers 
    Node* head = new Node(); 
    Node* second = new Node(); 
    Node* third = new Node(); 
    Node* fourth = new Node(); 

    //Assinging Values 
    head->value = 1; 
    second->value = 2; 
    third->value = 3; 
    fourth->value = 4; 

    //ASSINGING the addresses [LINKING THE LIST]
    head->next = second; 
    second->next = third; 
    third->next = fourth;
    fourth->next = NULL; 

    //! Declaring Functions 

    cout << "Old list: " << "\n"; 
    head->printNode(head); 

    cout << "Assigning a new node to the front" << "\n"; 
    head->insertFront(&head,69); 
    cout << "New list: " << "\n"; 
    head->printNode(head); 

    cout << "Assinging a new node to the back" << "\n"; 
    head->insertBack(&head, 420); 
    head->printNode(head); 

    cout << "Assining a new node at any point" << "\n"; 
    head->insertAfter(second,21);
    head->printNode(head); 

    


    return 0; 
}