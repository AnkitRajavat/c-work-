 #include<iostream>
 using namespace std;
 #define REAR 10;

    public int queue(){





    }



     int main(){

     int queue[REAR],i,t;
     cout<<"enter the  10 values\n  ";
      for(i=0;i<REAR;i++){

        cin>>queue[i];
      }


    cout<<"prform any operation press 1 for enqueue and 2 for dequeue";

   cin>>t;
   switch(t){
case 1:
    enqueue();
    break;
case 2:
    dequeue();
    break;

    default(){
     cout<<"your choice is not decent ";
    }
   }

      queue();



     }
