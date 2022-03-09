#include <iostream>
#include "linkedlist.h"

void Node::printNode(Node* n)
{
    while(n!= NULL)
    {
        std::cout << n->value << ", "; 
        n = n->next; 
    }
    std::cout << "\n"; 
}

void Node::insertFront(Node** head, int newValue)
{
    //1 prepare new node
    Node* swagNode = new Node(); 
    swagNode->value = newValue; 

    //2 link new node to address of head 
    swagNode->next = *head; 

    //3 assign head to new Node
    *head = swagNode; 
}

void Node::insertBack(Node** head, int newValue)
{
    //1. prepare new node 
    Node* backNode = new Node();
    backNode->value = newValue;
    backNode->next = NULL; //going to be the last node in the list 
    
    //2. check if head node is NULL ...empty list 
    if(*head == NULL)
    {
        *head = backNode;
        return;  
    }

    //3. find the last node
    Node* lastNode = *head;
    while(lastNode->next != NULL)
    {
        lastNode = lastNode->next; 
    }

    //4. 
    lastNode->next = backNode; 

}

void Node::insertAfter(Node* previous, int newValue)
{
    //! 0 check if previous node is NULL 
    if(previous == NULL)
    {
        std::cout << "Previous cannot be null pointer" << "\n"; 
        return; 
    }

    //! 1 prepare new node
    Node* afterNode = new Node(); 
    

    //! 2 insert afterNode after the previous 
    afterNode->next = previous->next; 
    previous->next = afterNode; 
}