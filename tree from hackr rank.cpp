#include<iostream>
#include<stdio.h>
using namespace std;

class node {
	public:
	int data;
	node* left, * right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
class solution {
public:
	node* insert(node* root, int data) {

		if (root == NULL) {
			return new node(data);
		}
		else {
			node* curr;
			if (data <= root->data) {
				curr = insert(root->left, data);
				root->left=curr;

			}
			else{
				curr = insert(root->right, data);
				root->right=curr;				}
		}

		return root;


	}
};
void preorder(node* root) {
	 if (root != NULL) {



		 cout << root->data<<"  ";
		 preorder(root->left);
		 preorder(root->right);
}
 }
 int height(node*root){
     int i, int j;
     cin>>i>>j;
     if(root!=NULL){




     }


 }

int main() {

	solution p ;
	 node* root=NULL;
	int d;
	int t;
cout<<"how much element you enter -";
	cin >> t;
	cout<<"\n"<<"for data of tree-";
	while (t-->0) {
		cin >> d;
		root = p.insert(root, d);

	}

	preorder(root);

	cout<<"you want to find distance between to node enter the value of node-";
	int i,j;


	height(root ,i,j);




}
