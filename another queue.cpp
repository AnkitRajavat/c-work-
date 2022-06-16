#include<iostream>
using namespace std;

  class Queue {
private:
    int rear ;
    int front;
    int size;
    int *Q;
    };

     queue(int size){
      this->size=size;
      front =rear=-1;
      Q=new int[size];

}
int main (){

  Queue t.queue(10);
  t.enqueue(2);
t.enqueue(3);
t.enqueue(4);
t.enqueue(5);
t.display();
t.dequeue();
}
