#include<iostream>
 using namespace std; 
   
class node {
	public:
	  int data; 
	  node* next;
};
  node *head=0,*temp,*newnode;
 int  circular(){
 	
 	 int k,val;
 	 do{
	  
 	 node*newnode= new node();
 	 cout<<"enter the element -";
 	 cin>>val;
 	 newnode->data=val;
 	 if(head==0){
 	 	 
 	 	
 	 	 newnode->next=newnode;
 	 	  head =newnode;
 	 	 }
 	else {
 		  
 		  temp=head;
 		  while(temp->next!=head){
		   
 		  
 		  temp=temp->next;
 		   temp->next=newnode;
 		   newnode->next=head;
 	}
	 }
	 cout<<"enter 1 for make anoher node ";
	 cin>>k;
	 
 }
 while(k!=0);
 }
   int display(){
   	 
   	 node* temp;
   	 temp = head;
   	 cout<<"this is all circular linked list  element -";
   	 while(temp->next!= head){
   	 	 
   	 	 cout<<45 temp->data;
   	 	 temp=temp->next;
   	 	
		}
   	cout<<temp->data;
   	
   }
   
   
   
   int main(){
   	
   	circular();
   	display();
   	
   }
