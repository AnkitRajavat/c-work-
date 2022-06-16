 #include<iostream>
 #include<stdio.h>

  using namespace std;

   struct node{

     int data;
     struct node *lnode,*rnode;

   };
   create_tree(struct node*tree){}
   insertelement(struct node *tree,int val){}
preorder(struct node *tree){}
inorder(tree){}
postorder(tree){}
smallest(tree){}
biggest(tree){}
deletedelement(tree,val){}
totalnode(tree){}
totalnode(tree){}
hightoftree(tree){}
mirrorimage(tree,val)
{

}
   int main (){

  struct node *ptr;
  create_tree(tree);
   int p,val;

  do{
  cout<<"***********this is a main menu*************\n";
  cout<<" press 1 for insert  element \n";
  cout<<"press  2 for preorder travesal \n";
 cout<<"press  3 for inorder  travesal \n";
 cout<<"press  4 for postorder travesal \n";
 cout<<"press  5 for find smallest element  \n";
 cout<<"press  6 for the biggest number \n";
 cout<<"press  7 for delete an element \n";
 cout<<"press  8 for count the total number of  node  \n";
 cout<<"press  9 for count height of tree  \n";
 cout<<"press  10 for find the mirror image of the tree \n";
 cout<<"press  11 for  exit from  the  \n\n\n";
 cout<<"enter the number :";
 cin>>p;
switch(p){

case 1:
    cout<<"enter the value of the new node-";
    cin>>val;

    tree=insertelement(tree,val);
    cout<<"\n\n";
    break;
    case 2:
    cout<<"element of the tree-";


    preorder(tree);
    cout<<"\n\n";
    break;
    case 3:
    cout<<"element of the tree-";


    inorder(tree);
    cout<<"\n\n";
    break;
    case 4:
    cout<<"element of the tree ";

postorder(tree);

    cout<<"\n\n";
    break;
    case 5:



    ptr=smallest(tree);
    cout<<"smallest element is :"<<ptr->data<<"<<\n\n";
    break;
    case 6:
    cout<<"element of the tree -";
  //  cin>>val;

    ptr=biggest(tree);
    cout<<"tahis is largest element :"ptr->data<<"\n\n";
    break;
    case 7:
    cout<<"entrer the value to be deleted-";
    cin>>val;

    ptr=deletedelement(tree,val);
    cout<<"\n\n";
    break;
    case 8:
    cout<<"total number of node-";
    //cin>>val;

    cout<<totalnode(tree);
    cout<<"\n\n";
    break;

    case 9:
    cout<<"hight of the tree -";
    //cin>>va

    cout<<hightoftree(tree);
    cout<<"\n\n";
    break;

    case 10:
    //cout<<"entrer the value of the new node-";
    ci//n>>val;

    tree=mirrorimage(tree,val);
    cout<<"\n\n";
    break;








}
}
while(p!=11);

return 0;
   }
