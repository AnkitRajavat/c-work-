#include<iostream>
using namespace std; 
 
  class node { 
  public:
  	 node* back; 
  	 int data ;
  	 node* next; 
  
  }; 
  node*head=0,*temp,*newnode;
 void  create()
  {
  	int k=1,val;
     do{
     	 
     	node* newnode=new node();
     	cout<<"enter the element -" ;
     	cin>>val;
     	newnode->data=val;
     	 if(head==0){
     	 	
     	 	head=newnode;
     	 	newnode->next=NULL;
     	 	newnode->back=NULL;
     	 	
     	 	
		  }
		  else {
		  	temp=head;
		  	
             temp->next =newnode;
             newnode->back=temp;
            newnode->next =NULL;
		  }
     

	cout<<"do you wannna to make another node ";
  cin>>k;}
  while(k!= 0);
  
  
  }
  void display(){
  	cout<<"your all nodes -\n";
  	node*temp;
  	temp=head;
  	while(temp!=NULL){
  		cout<<"  "<<temp->data;
  		temp=temp->next;
	  }
  }
  int main(){
  	  node a;
  	 create();
  	 display();
  	 return 0;
  	 
  	 
  }
