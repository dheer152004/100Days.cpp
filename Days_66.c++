// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
Const Cast
1.The const_cast is used to chang or manipulate the const behavior of the
source pointer. It means we can perform the const in two ways:
Setting a const pointer to a non-const pointer or deleting or removing 
the const from a const pointer.

syntax
const_cast<new_data_type>(expression)
*/
void function(int*);
int main(void) {
    const int num1=40;
    const int *num2=&num1;
    
    int*neww=const_cast<int*>(num2);
    function(neww);
    
}
void function(int*ptr){
    cout<<*ptr<<endl;
    cout<<"Constantness of num2 has changed"<<endl;
}
