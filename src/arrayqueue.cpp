#include<iostream>
using namespace std;
#include "queue.h"
void arrayQueue::enqueue(int data){
    if(this->isFull()){
        cout<<"The queue is full and further data can't be added"<<endl;
    }
    else{
        rear=(rear+1)%size;
        array[rear]=data;
    }
}
int arrayQueue::dequeue(){
   if(this->isEmpty()){
    cout<<"The data can't be taken out as queue is empty"<<endl;
    return 1;
   }
   else{
    froont=(froont+1)%size;
return array[froont];
   }
}
bool arrayQueue::isEmpty(){
    if(froont==rear){
        return true;
    }
    else{
        return false;
    }
}
bool arrayQueue::isFull(){
    if(froont==(rear+1)%size){
        return true;
    }
    else{
        return false;
    }
}
int arrayQueue::front(){
    return array[froont];
}
int arrayQueue::back(){
    return array[rear];
}