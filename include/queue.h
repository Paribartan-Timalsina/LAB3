#pragma once
#include "linkedlist.h"
template<class T3>
class Queue
{
public:
  virtual void enqueue(T3 data) = 0; // Adds an element into the queue
  virtual int dequeue() = 0;         // Removes an element from the queue
  virtual bool isEmpty() = 0;         // Checks if the queue is empty
  virtual bool isFull() = 0;          // Checks if the queue is full
  virtual int front() = 0;            // Gives the element at the front
  virtual int back() = 0;             // Gives the element at the rear
};
template<class T4>
class LinkedlistQueue : public Queue<T3>
{
public:
  virtual void enqueue(T4 data); // Adds an element into the queue
  virtual int dequeue();         // Removes an element from the queue
  virtual bool isEmpty();         // Checks if the queue is empty
  virtual bool isFull();          // Checks if the queue is full
  virtual int front();            // Gives the element at the front
  virtual int back();             // Gives the element at the rear
private:
  Linkedlist <T4> l;
};
template<class T5>
class arrayQueue : public Queue<T3>
{
public:
arrayQueue(T5 size){
  this->size=size;
  array=new int[size];
}
  virtual void enqueue(T5 data); // Adds an element into the queue
  virtual int dequeue();         // Removes an element from the queue
  virtual bool isEmpty();         // Checks if the queue is empty
  virtual bool isFull();          // Checks if the queue is full
  virtual int front();            // Gives the element at the front
  virtual int back();             // Gives the element at the rear
private:
  int *array;
  int froont = 0;
  int rear = 0;
  int size;
};