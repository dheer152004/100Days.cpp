// C++ unique_ptr
#include <iostream>
#include <memory>//requires
using namespace std;

int main() {
    unique_ptr<int[]> ptr{new int[10]};
    for(int i=0;i<10;i++){
        ptr[i]=i*i;
    }
    cout<<ptr[4]<<endl;
    cout<<ptr[7]<<endl;
    
    //another way
    auto ptr1=make_unique<int[]>(10);
    for(int i=0;i<10;i++){
        ptr1[i]=i*i;
    }
    cout<<ptr1[4]<<endl;
    cout<<ptr1[7]<<endl;
    
    return 0;
}
