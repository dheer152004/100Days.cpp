// C++ pointer to array
#include <iostream>
using namespace std;

int main() {
    int size=5;
    int arr[size]={23,45,67,98,79};
    int *ptr=arr;
    
    for(int i=0;i<5;i++)
    {
        cout<<"the value of index "<<i<<":"<<*(ptr+i)<<endl;
    }

    return 0;
}
