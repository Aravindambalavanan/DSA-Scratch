#include "CircularLinkedList.h"

#include <iostream>

CircularLinkedList::CircularLinkedList()
{
    start = nullptr;
}

CircularLinkedList::~CircularLinkedList()
{
    DeleteList();
}

void CircularLinkedList::Create()
{
    int value;
    char ch;
    CNode *newNode;

    do
    {
        std::cout << "Enter a value: ";
        std::cin >> value;

        newNode = new CNode;
        newNode->data = value;

        if (start == nullptr)
        {
            start = newNode;
            newNode->next = start;
        }
        else
        {
            CNode *temp = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = start;
        }

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

void CircularLinkedList::Display()
{
    if (start == nullptr)
    {
        std::cout << "Circular linked list is empty." << std::endl;
        return;
    }

    CNode *temp = start;

    std::cout << "Circular Linked List: ";
    do
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != start);

    std::cout << std::endl;
}

void CircularLinkedList::InsertAtBeginning()
{
    int value;
    std::cout << "Enter a value to insert at the beginning: ";
    std::cin >> value;

    CNode *newNode = new CNode;
    newNode->data = value;

    if (start == nullptr)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        CNode *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
        start = newNode;
    }

    std::cout << "Value inserted at the beginning successfully." << std::endl;
}

void CircularLinkedList::InsertAtEnd()
{
    int value;
    std::cout << "Enter a value to insert at the end: ";
    std::cin >> value;

    CNode *newNode = new CNode;
    newNode->data = value;

    if (start == nullptr)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        CNode *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = start;
    }

    std::cout << "Value inserted at the end successfully." << std::endl;
}

void CircularLinkedList::DeleteAtBeginning()
{
    if (start == nullptr)
    {
        std::cout << "Circular linked list is empty. Cannot delete." << std::endl;
        return;
    }

    if (start->next == start)
    {
        delete start;
        start = nullptr;
    }
    else
    {
        CNode *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        CNode *temp2 = start;
        start = start->next;
        temp->next = start;
        delete temp2;
    }

    std::cout << "Deleted the first element successfully." << std::endl;
}

void CircularLinkedList::DeleteAtEnd()
{
    if (start == nullptr)
    {
        std::cout << "Circular linked list is empty. Cannot delete." << std::endl;
        return;
    }

    if (start->next == start)
    {
        delete start;
        start = nullptr;
    }
    else
    {
        CNode *temp = start;
        CNode *prev = nullptr;

        while (temp->next != start)
        {
            prev = temp;
            temp = temp->next;
        }

        prev->next = start;
        delete temp;
    }

    std::cout << "Deleted the last element successfully." << std::endl;
}

void CircularLinkedList::DeleteList()
{
    if (start == nullptr)
    {
        return;
    }

    CNode *current = start;
    CNode *next;

    do
    {
        next = current->next;
        delete current;
        current = next;
    } while (current != start);

    start = nullptr;

    std::cout << "Deleted the entire circular linked list." << std::endl;
}