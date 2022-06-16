#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctime>
#include<time.h>
#include<stdio.h>
#include <cstdlib>

using namespace std ;
 int main (void){
 	
 	int arr[500],i,temp=0,j;
 	  clock_t time_req;
 	  srand((unsigned)time(NULL));
 	  
 	  
 	  
 	 //cout<<"enter the  5 elements -";
 	 
 	for(int i=0;i<500;i++){
 	  
 	  int t=rand();
	   arr[i]=t;
	
	 }
	 time_req=clock();
 	for( i=0;i<500;i++){
 		for(j=0;j<=498;j++){
		 
 			
 			if(arr[j]>=arr[j+1]){ 
 				 temp= arr[j];
 				arr[j]=arr[j+1];
 				arr[j+1]=temp;
 				
			 }
 			
	}
	 }
	  time_req = clock()- time_req;
	  cout <<" it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;


	 
 	
 	 
 	 cout<<"your all  the element of 100 in ascending order \n-";
 	 
 	for(i=0;i<500;i++){
 	  
	   cout<<" "<<arr[i];
	
	 }
 	
 	
 }
