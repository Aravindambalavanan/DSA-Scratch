#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList()
{
    start = nullptr;
}

DoublyLinkedList::~DoublyLinkedList()
{
    DeleteList();
}

void DoublyLinkedList::Create()
{
    DNode *newNode, *ptr;
    int num;
    std::cout << "\nEnter -1 to end" << std::endl;
    std::cout << "Enter the data: ";
    std::cin >> num;

    while (num != -1)
    {
        newNode = new DNode;
        newNode->data = num;
        newNode->prev = nullptr;

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
            newNode->prev = ptr;
            newNode->next = nullptr;
        }

        std::cout << "Enter the data: ";
        std::cin >> num;
    }
}

void DoublyLinkedList::Display()
{
    DNode *ptr;
    ptr = start;

    while (ptr != nullptr)
    {
        std::cout << " " << ptr->data;
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::InsertAtBeginning()
{
    DNode *newNode;
    int num;
    std::cout << "\nEnter the data: ";
    std::cin >> num;

    newNode = new DNode;
    newNode->data = num;
    newNode->prev = nullptr;

    if (start == nullptr)
    {
        newNode->next = nullptr;
        start = newNode;
    }
    else
    {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
}

void DoublyLinkedList::InsertAtEnd()
{
    DNode *ptr, *newNode;
    int num;
    std::cout << "\nEnter the data: ";
    std::cin >> num;

    newNode = new DNode;
    newNode->data = num;
    newNode->next = nullptr;

    if (start == nullptr)
    {
        newNode->prev = nullptr;
        start = newNode;
    }
    else
    {
        ptr = start;
        while (ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = newNode;
        newNode->prev = ptr;
    }
}

void DoublyLinkedList::InsertBefore()
{
    DNode *newNode, *ptr, *preptr;
    int num, val;
    std::cout << "\nEnter the data: ";
    std::cin >> num;
    std::cout << "Enter the value before which the data has to be inserted: ";
    std::cin >> val;

    newNode = new DNode;
    newNode->data = num;
    ptr = start;

    if (start->data == val)
    {
        newNode->prev = nullptr;
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
        return;
    }

    while (ptr != nullptr && ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        std::cout << "Value not found in the list." << std::endl;
        return;
    }

    preptr->next = newNode;
    newNode->prev = preptr;
    newNode->next = ptr;
    ptr->prev = newNode;
}

void DoublyLinkedList::InsertAfter()
{
    DNode *newNode, *ptr;
    int num, val;
    std::cout << "\nEnter the data: ";
    std::cin >> num;
    std::cout << "Enter the value after which the data has to be inserted: ";
    std::cin >> val;

    newNode = new DNode;
    newNode->data = num;
    ptr = start;

    while (ptr != nullptr && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        std::cout << "Value not found in the list." << std::endl;
        return;
    }

    newNode->next = ptr->next;
    newNode->prev = ptr;

    if (ptr->next != nullptr)
    {
        ptr->next->prev = newNode;
    }

    ptr->next = newNode;
}

void DoublyLinkedList::DeleteAtBeginning()
{
    if (start != nullptr)
    {
        DNode *ptr = start;
        start = start->next;

        if (start != nullptr)
        {
            start->prev = nullptr;
        }

        delete ptr;
    }
}

void DoublyLinkedList::DeleteAtEnd()
{
    if (start != nullptr)
    {
        DNode *ptr = start;

        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }

        if (ptr->prev != nullptr)
        {
            ptr->prev->next = nullptr;
        }
        else
        {
            start = nullptr;
        }

        delete ptr;
    }
}

void DoublyLinkedList::DeleteNode()
{
    int val;
    std::cout << "\nEnter the value of the node which has to be deleted: ";
    std::cin >> val;

    DNode *ptr = start;

    while (ptr != nullptr && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if (ptr == nullptr)
    {
        std::cout << "Node with the given value not found." << std::endl;
        return;
    }

    if (ptr->prev != nullptr)
    {
        ptr->prev->next = ptr->next;
    }
    else
    {
        start = ptr->next;
    }

    if (ptr->next != nullptr)
    {
        ptr->next->prev = ptr->prev;
    }

    delete ptr;
}

void DoublyLinkedList::DeleteAfter()
{
    int val;
    std::cout << "\nEnter the value after which the node has to be deleted: ";
    std::cin >> val;

    DNode *ptr = start;

    while (ptr != nullptr && ptr->data != val)
    {
        ptr = ptr->next;
    }

    if (ptr == nullptr || ptr->next == nullptr)
    {
        std::cout << "Node with the given value not found, or there's no node to delete after it." << std::endl;
        return;
    }

    DNode *nodeToDelete = ptr->next;
    ptr->next = nodeToDelete->next;

    if (nodeToDelete->next != nullptr)
    {
        nodeToDelete->next->prev = ptr;
    }

    delete nodeToDelete;
}

void DoublyLinkedList::DeleteList()
{
    while (start != nullptr)
    {
        DNode *ptr = start;
        start = start->next;
        delete ptr;
    }
}

void DoublyLinkedList::Sort()
{
    DNode *ptr1, *ptr2;
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