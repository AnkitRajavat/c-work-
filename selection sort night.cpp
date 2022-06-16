#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>
#include<stdio.h>
#include <cstdlib>
using namespace std ;
    
 void selectionsort(int a[]){
 	 	
 	int i,j,k;
 	for(i=0;i<1000;i++){
 		
 		for(j=k=i;j<1000;j++){
 			
 			if(a[j]<a[k])
 			{
 				k=j;
			 }
		}
 			swap(a[i],a[k]);
		 
	 }
	
	}
 	
 	
 
 int swap(int a[],int b[]){
 	int temp=0;
 	temp=a[i];
 	a[i]=a[k];
 	a[k]=temp;
return a[i],a[k]; 	
 }
 
  int main(){
  	
  	
  	int a[1000],i,n;
  	clock_t time_req;
  	srand((unsigned)time(time_req));

  	for(i=0;i<1000;i++){
  		
  		int t=rand();
  		a[i]=t;
  		
  		
	  }
  	selectionsort(a[]);
  	cout<<"this  is sorted array ";
  	for(i=0;i<1000;i++)
{
	cout<<"  "<<a[i];
	  }  	
  }
