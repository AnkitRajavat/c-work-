#include<iostream>
using namespace std;
 
  class node{
  	
  	int data; 
  	node *next;
  };
 node head=0,*newnode,*temp;
 int stack()
{
	int k=1,val;
	while(k!=0){
	
	node* newnode=new node();
	cout<<"enter the element ";
	cin>>val;
	newnode->data=val;
if()


}
	
	
	
	
	
	
	
 } 
 
 int main(){
 	
 	
 	int i;
 	cout<<"enter the any option :\n ";
 	cout<<"1.make a stack";
 	
 	cout<<"2.Push\n"; 
 	
 	cout<<"3.pop\n";
 	cout<<"4.peek\n";
 	
 	cout<<"5.exit\n";
 	cin>>i;
 	switch(i){
 		
 		case 1:
 			stack();
 			break;
 			case 2:
 				push();
 				break;
 				case 3:
 					pop();
 					break;
 					case 4:
 						peek();
 						break;	
	 }
	 
 	
 	
 	
 }
