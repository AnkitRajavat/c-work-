#include<iostream>
using namespace std;
int reverse(int a[],int i,int n){
cout<<"reverse array-\n";

while(n>0){
    cout<<a[n-1]<<"\n";
    n--;
}

}
 int main (){

 int a[5];
 int i;
 int n = sizeof(a)/sizeof(a[0]);
                        cout<<"enter the 5 element-\n";
 for(i= 0;i<n;i++){

    cin>>a[i];
 }

 reverse(a,i,n);


 }
