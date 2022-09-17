#include <iostream>
using namespace std;
#include "linkedlist.h"
template<class T2>
bool Linkedlist<T2>::isempty()
{
    if (Head == nullptr)
    {
        
        return true;
    }
    else
    {
        
        return false;
    }
}
template<class T2>
void Linkedlist<T2>::addToHead(T2 data)
{
    cout << data << " is being add to head" << endl;
    Node *newnode = new Node();
    newnode->info = data;
    if (Head == nullptr)
    {

        Tail = newnode;
        newnode->next = nullptr;
        Head = newnode;
    }
    else
    {

        newnode->next = Head;
        Head = newnode;
    }
}
template<class T2>
void Linkedlist<T2>::addToTail(T2 data)
{
    cout << data << " is being add to tail" << endl;
    Node *newnode = new Node();
    newnode->info = data;
    
    //  Tail->next=newnode;
    newnode->next = nullptr;
     if(Head==nullptr){
        Head=newnode;
        Tail=newnode;
    }else{
    Tail->next = newnode;
    Tail = newnode;
    }
}
template<class T2>
int Linkedlist<T2>::removeFromHead()
{
   
    Node *newnode;
    newnode = Head;
    int temp = newnode->info;
    Head = newnode->next;
    delete newnode;
    return temp;
}
template<class T2>
Node*& Linkedlist<T2>::retrieve(T2 data, Node<T2> *&outputpointer)
{
    Node *newnode;
    newnode = Head;
    while (newnode != nullptr && newnode->info != data)
    {
        newnode = newnode->next;
    }
    if (!(newnode == nullptr) && newnode->info == data)
    {
        outputpointer = newnode;
    }
    else
    {
        // outputpointer=nullptr;
        cout << "The given data isn't present so it can't be retrieved" << endl;
    }
    return outputpointer;
}
template<class T2>
void Linkedlist<T2>::search(T2 data)
{
    Node *newnode;
    newnode = Head;
    while (!(newnode == nullptr) && newnode->info != data)
    {
        newnode = newnode->next;
    }
    if (!(newnode == nullptr) && newnode->info == data)
    {
        cout << "The value " << data << " is present in the list" << endl;
    }
    else
    {
        cout << "The value " << data << " isn't present in the list" << endl;
    }
}
template<class T2>
void Linkedlist<T2>::traverse()
{
    Node *newnode;
    newnode = Head;
    int i = 0;
    cout << "the elements present in the linked list are:" << endl;
    while (newnode != nullptr)
    {
        cout << "The " << i << " data is:";
        cout << newnode->info << endl;
        newnode = newnode->next;
        i += 1;
    }
}
template<class T2>
void Linkedlist<T2>::add(T2 data, Node<T2> *preDecessor)
{
    cout << data << " is being added after the data " << preDecessor->info << endl;
    Node *newnode = new Node();
    newnode->info = data;

    newnode->next = preDecessor->next;
    preDecessor->next = newnode;
}
template<class T2>
void Linkedlist<T2>::remove(T2 data)
{
    cout << data << " is being removed" << endl;
    if (Head->info == data)
    {
        removeFromHead();
    }
    else
    {
        Node *temp = Head->next;
        Node *p = Head;
        while (temp->info != data)
        {
            p = p->next;
            temp = temp->next;
        }
        p->next = temp->next;
        delete temp;
        if (p->next == nullptr)
        {
            Tail = p;
        }
    }
}
template<class T2>
int Linkedlist<T2>::retnode()
{
    return Head->info;
}
template<class T2>
int Linkedlist<T2>::lastnode()
{
    return Tail->info;
}