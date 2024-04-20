// Pointer to pointer
#include <iostream>
using namespace std;

void swap(int a, int b)//call by value
{
    int temp=a ;
    a=b;
    b=temp;
}
void swapb(int *a, int *b)//call by reference
{
    int temp=*a ;
    *a=*b;
    *b=temp;
}

int main() {
  /*  int a=10;
    int*p;
    p=&a;
    cout<<*p<<endl;
    cout<<p<<endl;
    
    int**q;
    q=&p;
    cout<<**q<<endl;
    cout<<*q<<endl;
    cout<<p<<endl;  */

    int a=2,b=4;
    // int*aptr=&a;
    // int*bptr=&b;
    // swap(aptr,bptr);
    //another way is below
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    swapb(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}
