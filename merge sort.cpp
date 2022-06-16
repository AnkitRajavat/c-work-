#include<iostream>
using namespace std;
 int b[10];
 int a[11]={5,87,59,78,96,9,63,6,9,99};
 void mergeing(int l,int mid ,int h ){

     int i=l,j=mid+1,k=l;
     while((i<=mid)&&(j<=h)){

        if(a[i]<a[j]){
            b[k++]=a[i++];

        }
        else{

            b[k++]=a[j++];
        }
        //k++;

     }

   while(l <= mid)
      b[i++] = a[l++];

   while(l <= high)
      b[i++] = a[l++];
   //if(i>mid){
 while(j<=h){
        b[k++]=a[j++];
}
//else{
 while(i<=mid){
    b[k++]=a[i++];
 }
//}
}


 void mergesort(int l,int h){
  if(l<h){
  int mid;
  mid=(l+h)/2;

  mergesort(l,mid);
  mergesort(mid+1,h);
   mergeing(l,mid,h);
 }
 }





 int main(){


int k,l=0,h=10;


  mergesort(0,10);
  cout<<"after the sort the array-";
  for(k=0;k<10;k++)
{

    cout<<"  "<<b[k];
}

 }
