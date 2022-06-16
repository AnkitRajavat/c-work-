#include<iostream>
using namespace std;
 //int max(int a[],int n){







 //}
  int main(){
  int a[5],n,i,j,temp;
  n=sizeof(a)/sizeof(a[0]);
  cout<<"enter the 5 element- ";
  for(i=0;i<n;i++){

    cin>>a[i];

  }


for(j=1;j<n;j++)
    {for(i=0;i<n;i++){

    if(a[i]>a[i+1])
    {
        temp=a[i];
        a[i]=a[i+1];
     a[i+1]=temp;

    }

}
}

cout<<"maximum no-"<<a[n-1]<<"\n";

cout<<"minimum no-"<<a[i];
  }
