// #ifndef linkedlist. h
// #define linkedlist. h
#pragma once
template<class T1>

class Node
{
public:
    T1 info;
    Node *next;
    Node(){};
    Node(T1 data, Node *next) : info(data), next(next) {}
    Node(T1 data) : info(data), next(nullptr) {}
};
template<class T2>
class Linkedlist
{
private:
    Node <T2> *Head;
    Node <T2> *Tail;

public:
    Linkedlist()
    {
        Head = nullptr;
        Tail=nullptr;
    }
    ~Linkedlist() {}
    bool isempty();
    void addToHead(T2 data);
    void addToTail(T2 data);
    void add(T2 data, Node<T2> *preDecessor);
    int removeFromHead();
    void remove(T2 data);
    Node<T2>*&  retrieve(T2 data, Node<T2> *&outputpointer);
    void search(T2 data);
    void traverse();
    int retnode();
    int lastnode();
};
