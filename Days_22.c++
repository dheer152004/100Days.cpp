// Array

#include <iostream>
#include<climits>
using namespace std;

int main() {
   // int array[4]={10,20,30,40}; simple way
/*  
    int array[4];
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;
*/

 //By user input, it may be difficut to make n term so make for loop
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int array[n];
/*    cin>>[0];
    cin>>[1];
    cin>>[2];
    cin>>[3];
    cin>>[4];
*/
   for(int i=0;i<n;i++)
   {
       cout<<"Enter the "<<i<<" element of array"<<endl;
       cin>>array[i];
   }
   
   int maxNo=INT_MIN;
   int minNo=INT_MAX;
   
   for(int i=0;i<n;i++)
   {/*
       if(array[i]>maxNo)
       {
           maxNo=array[i];
       }
       if(array[i]<minNo)
       {
           minNo=array[i];
       }
     */
     //Better way is
     
     maxNo=max(maxNo,array[i]);//functions in climits
     minNo=min(minNo,array[i]);
   }
    cout<<"Max no. : "<<maxNo<<"\n"<<"Min no. : "<<minNo<<endl;
    
    return 0;
}
