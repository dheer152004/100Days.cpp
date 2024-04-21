// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a=10; //store in stack
    int *p=new int(); //store in heap
    *p=10;
    
    delete(p); //deallocate memory
    p=new int[4];
    
    delete[]p;
    p=NULL;

    //new and delete are the
    //operator in c++ for DMA
    int size;
    int*ptr;
    cout<<"Enter the number of values you want to store"<<endl;
    cin>>size;
    ptr=new int[size];
    
    cout<<"Enter the you want to store the values in the array are"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    
    cout<<"The values in the array are whose size is "<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
