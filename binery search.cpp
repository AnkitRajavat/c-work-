#include<iostream>
using namespace std;
   class binary{

   public:
      int search(int arr[],int n,int k,int l,int h){

      while(l<=h){
      int mid=(l+h)/2;
      if(arr[mid]==k){
        cout<<mid;
          break;
      }
      else if (arr[mid]>k)
        h=mid-1;
      else
      l=mid+1;
      }


      }
  };
  int main(){
      binary t;
  int arr[]={1,2,3,4,5,6,7,8,9,10},l=0,h=10,k,i,p;
 cout<<"this is all element in arry";
  for ( i=0;i<10;i++){
    cout<< "  "  <<arr[i] <<"\n";
  }
  cout<<"enterr your elelmnt which you wanna to search- ";
  cin>>k;



   t. search(arr,10,k,0,9);
  //cout<< p;
  }
