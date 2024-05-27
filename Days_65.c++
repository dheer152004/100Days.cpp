// C++
#include <iostream>
using namespace std;
/*
Reinterpret Cast
1.It is used to convert a pointer of same data type into a pointer of 
  another data type, even if the data types before and after conversion
  are different.
2.It doesn't check if the pointer type and data pointed by the pointer is same or not.
  
  syntax:
  reinterpret_cast<new_data_type>(expression);
*/
int main() {
    int*ptr=new int(65);//As char will accept ascii value
    
    char*ch=reinterpret_cast<char*>(ptr);
    cout<<"The value of ptr :"<<ptr<<endl;
    cout<<"The value of ch :"<<ch<<endl;
    cout<<"The value of *ptr :"<<*ptr<<endl;
    cout<<"The value of *ch :"<<*ch<<endl;

    return 0;
}
