#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList()
{
    start = nullptr;
}

SinglyLinkedList::~SinglyLinkedList()
{
    DeleteList();
}

void SinglyLinkedList::Create()
{
    Node *newNode, *ptr;
    int num;
    std::cout << "\nEnter -1 to end" << std::endl;
    std::cout << "Enter the data: ";
    std::cin >> num;

    while (num != -1)
    {
        newNode = new Node;
        newNode->data = num;

        if (start == nullptr)
        {
            newNode->next = nullptr;
            start = newNode;
        }
        else
        {
            ptr = start;
            while (ptr->next != nullptr)
                ptr = ptr->next;
            ptr->next = newNode;
            newNode->next = nullptr;
        }

        std::cout << "Enter the data: ";
        std::cin >> num;
    }
}

void SinglyLinkedList::Display()
{
    Node *ptr;
    ptr = start;

    while (ptr != nullptr)
    {
        std::cout << " " << ptr->data;
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

void SinglyLinkedList::InsertAtBeginning()
{
    Node *newNode;
    int num;
    std::cout << "\nEnter the data: ";
    std::cin >> num;

    newNode = new Node;
    newNode->data = num;
    newNode->next = start;
    start = newNode;
}

void SinglyLinkedList::InsertAtEnd()
{
    Node *ptr, *newNode;
    int num;
    std::cout << "\nEnter the data: ";
    std::cin >> num;

    newNode = new Node;
    newNode->data = num;
    newNode->next = nullptr;
    ptr = start;

    while (ptr->next != nullptr)
        ptr = ptr->next;

    ptr->next = newNode;
}

void SinglyLinkedList::InsertBefore()
{
    Node *newNode, *ptr, *preptr;
    int num, val;
    std::cout << "\nEnter the data: ";
    std::cin >> num;
    std::cout << "Enter the value before which the data has to be inserted: ";
    std::cin >> val;

    newNode = new Node;
    newNode->data = num;
    ptr = start;

    if (start->data == val)
    {
        newNode->next = start;
        start = newNode;
        return;
    }

    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newNode;
    newNode->next = ptr;
}

void SinglyLinkedList::InsertAfter()
{
    Node *newNode, *ptr, *preptr;
    int num, val;
    std::cout << "\nEnter the data: ";
    std::cin >> num;
    std::cout << "Enter the value after which the data has to be inserted: ";
    std::cin >> val;

    newNode = new Node;
    newNode->data = num;
    ptr = start;
    preptr = ptr;

    while (preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newNode;
    newNode->next = ptr;
}

void SinglyLinkedList::DeleteAtBeginning()
{
    if (start != nullptr)
    {
        Node *ptr = start;
        start = start->next;
        delete ptr;
    }
}

void SinglyLinkedList::DeleteAtEnd()
{
    if (start != nullptr)
    {
        Node *ptr = start;
        Node *preptr = nullptr;

        while (ptr->next != nullptr)
        {
            preptr = ptr;
            ptr = ptr->next;
        }

        if (preptr != nullptr)
            preptr->next = nullptr;

        delete ptr;
    }
}

void SinglyLinkedList::DeleteNode()
{
    int val;
    std::cout << "\nEnter the value of the node which has to be deleted: ";
    std::cin >> val;

    Node *ptr = start;
    Node *preptr = nullptr;

    while (ptr != nullptr && ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        std::cout << "Node with the given value not found." << std::endl;
        return;
    }

    if (preptr != nullptr)
        preptr->next = ptr->next;
    else
        start = ptr->next;

    delete ptr;
}

void SinglyLinkedList::DeleteAfter()
{
    int val;
    std::cout << "\nEnter the value after which the node has to be deleted: ";
    std::cin >> val;

    Node *ptr = start;
    Node *preptr = nullptr;

    while (preptr != nullptr && preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        std::cout << "Node with the given value not found." << std::endl;
        return;
    }

    if (ptr->next != nullptr)
    {
        Node *temp = ptr->next;
        ptr->next = temp->next;
        delete temp;
    }
}

void SinglyLinkedList::DeleteList()
{
    while (start != nullptr)
    {
        Node *ptr = start;
        start = start->next;
        delete ptr;
    }
}

void SinglyLinkedList::Sort()
{
    Node *ptr1, *ptr2;
    int temp;
    ptr1 = start;

    while (ptr1 != nullptr)
    {
        ptr2 = ptr1->next;
        while (ptr2 != nullptr)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}