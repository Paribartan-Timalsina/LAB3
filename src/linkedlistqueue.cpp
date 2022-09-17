#include<iostream>
using namespace std;
#include"queue.h"
template<class T4>
void LinkedlistQueue<T4>::enqueue(T4 data){
    l.addToTail(data);
}
template<class T4>
int LinkedlistQueue<T4>::dequeue(){
  return  l.removeFromHead();
}
template<class T4>
bool LinkedlistQueue<T4>::isEmpty(){
   if( l.isempty()){
    cout<<"The list is empty"<<endl;
    return true;
   }
   else{
    return false;
   }
}
template<class T4>
bool LinkedlistQueue<T4>::isFull(){
    return false;
}
template<class T4>
int LinkedlistQueue<T4>::front(){
   return l.retnode();
}
template<class T4>
int LinkedlistQueue<T4>::back(){
   return l.lastnode();
} 


