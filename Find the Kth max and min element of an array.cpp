#include<iostream>
using namespace std;
 //int max(int a[],int n){







 //}
  int main(){
  int a[5],n,i,j,temp,t;
  n=sizeof(a)/sizeof(a[0]);
  cout<<"enter the 5 element- ";
  for(i=0;i<n;i++){

    cin>>a[i];

  }
  for(j=0;j<n;j++){
for(i<0;i<n;i++){
    if(a[i]<a[i+1]){
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
        }
}
}
for(i=0;i<n;i++){
    cout<<a[i];
}
cout<<"enter the Kth position element-\n";
cin>>t;

cout<<"element is ="<<a[t-1];
  }
