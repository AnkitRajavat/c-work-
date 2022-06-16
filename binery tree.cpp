#include <iostream>
using namespace std;

   class tree {
public:
    int data;
    tree*leftnode,*rightnode;

   };

   tree*create( ){
   int d;
    tree*newnode;
    int k;
   newnode =new tree();
   cout<<"enter the element (-1) no node -";
   cin>>d;
   k=d;
   if(d==-1){

    return 0;
   }
   else {
 while(k!=-1){
     newnode->data=d;
     cout<<"enter the left node (-1)no node& node of "<<d;
      newnode->leftnode= create();

    cout<<"enter the right node (-1)no node& node of "<<d;
      newnode->rightnode= create();
    }
}
}

int main(){

   create();



}
