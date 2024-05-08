// Unary operator overloadding
#include <iostream>
using namespace std;

class Increase{
    int value;
    public:
    Increase(){
        value=10;
    }
    
    void operator ++()
    {
        value=value+5;
        
    }
    void display(){
     cout<<"Value is : "<<value<<endl;   
     cout<<"In ++ operator"<<endl;
    }
    
    void operator--(){
        value=value-5;
    }
    void display(int x){
     cout<<"Value is : "<<value<<endl; 
     cout<<"In -- operator"<<endl;
    }
    void operator -(){
        value=value*2;
    }
    void display(double p){
     cout<<"Value is : "<<value<<endl; 
     cout<<"In - operator"<<endl;
    }
    
    void operator !(){
        value=value-12;
    }
    void display(int v,int a){
     cout<<"Value is : "<<value<<endl; 
     cout<<"In ! operator"<<endl;
    }
};

int main() {
    Increase Inc;
    ++Inc;
    Inc.display();
    --Inc;
    Inc.display(5);
    -Inc;
    Inc.display(7.2);
    !Inc;;
    Inc.display(2,3);
  
    return 0;
}
