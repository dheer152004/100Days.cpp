// New and delete keywords/operators
#include <iostream>
using namespace std;


int main() {
    int a=4;
    int*ptr=&a;
    
    cout<<"the value of a is "<<*(ptr)<<endl;
    cout<<"the value of a is "<<ptr<<endl;
    
    //New keyword/keyword
    int*p= new int(40);
    cout<<"The value at address of p is "<< *(p)<<endl;
    cout<<"The value at address of p is "<< p<<endl;
    
     cout<<"__________________________________________________________"<<endl;
     
    int *arr = new int[3];
    arr[0]=10;
    //arr[1]=20; same as below
    *(arr+1)=20;
    arr[2]=30;
    cout<<"The value of arr[0] is "<< arr[0]<<endl;
    cout<<"The value of arr[1] is "<< arr[1]<<endl;
    cout<<"The value of arr[2] is "<< arr[2]<<endl;
    
    cout<<"__________________________________________________________"<<endl;
    //Delete keyword/keyword
    delete arr;
    cout<<"The value of arr[0] is "<< arr[0]<<endl;
    cout<<"The value of arr[1] is "<< arr[1]<<endl;
    cout<<"The value of arr[2] is "<< arr[2]<<endl;

    cout<<"__________________________________________________________"<<endl;
    delete[] arr;
    cout<<"The value of arr[0] is "<< arr[0]<<endl;
    cout<<"The value of arr[1] is "<< arr[1]<<endl;
    cout<<"The value of arr[2] is "<< arr[2]<<endl;
    
    return 0;
}
