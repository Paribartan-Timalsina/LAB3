#include <iostream>
#include"linkesdlist.cpp"
using namespace std;
#include"queue.h"
int main(){
    int size;
    cout<<"Enter the number of elements:";
    cin>>size;
    Queue <int> *q=new  arrayQueue<int>(size);
    Queue<int> *l =new LinkedlistQueue<int>();
l->isEmpty();
l->enqueue(56);
l->dequeue();
l->isEmpty();
l->enqueue(789);
l->isEmpty();
l->enqueue(456);
l->enqueue(123);
l->enqueue(67);
cout<<"The element at the front of queue is:"<<l->front()<<endl;
cout<<"The element at the back of the queue is:"<<l->back()<<endl;
if(q->isEmpty()){
    cout<<"The queue is empty"<<endl;
}
q->enqueue(56);
if(q->isEmpty()){
    cout<<"The queue is empty"<<endl;
}
}