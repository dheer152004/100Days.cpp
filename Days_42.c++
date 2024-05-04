// C++ Lambda
//It has access in scope 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Hello Dheeraj";
    
    //these are so messy
    /*struct{
        void operator()(int x)
        {
            cout<<"x"<<endl; 
        }
        
    }something;
    */
    
  //  [](int x){cout<<"x"<<endl; }
    
    
   // [CC](p){fd};capture,parameter,function definatio.  
   /*
   [](int x){
       if(x%2==0)
       {
           cout<<x<<"is even"<<endl;
       }
       else{
           cout<<x<<"is odd"<<endl;
       }
   }*/
   
    vector<int> v{2,3,4,5,6,78,56};
    for_each(v.begin(),v.end(), [](int x){cout<< x <<endl; }); 
    for_each(v.begin(),v.end(), [](int x){
       if(x%2==0)
       {
           cout<<x<<" is even"<<endl;
       }
       else{
           cout<<x<<" is odd"<<endl;
       }
   } 
   ); 
   cout<<"Next Line_________________________________"<<endl;
   
   
    int d=7,e=5;
    for_each(v.begin(),v.end(), [e,d](int x){
       if(x%e==0)
       {
           cout<<x<<" is divsible by "<<e<<endl;
       }
       else{
           cout<<x<<" is not divisible by "<<e<<endl;
       }
       
   //d=10; //to use this we have to pass reference in [d]like [&d]
   //e=19; //make [&e]
   
   //after changing the value;
   //try in [&] all reference but give compile time erroe
   //try in [=] values of these varables will not gone be changed and give error  
   //cout<<d<<"is equal to"<<endl;   
   } 
   ); 
    
    

    return 0;
}
