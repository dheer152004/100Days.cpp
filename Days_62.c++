// C++
#include <iostream>
using namespace std;

int main() {
    int i,n;
    cout<<"Enter the number of integers : "<<endl;
    cin>>n;
    int*ptr=(int*)malloc(n*sizeof(int));
    
    if(ptr==NULL){
        cout<<"Memory not available "<<endl;
        exit(1);
    }
    for(i=0;i<n;i++){
        cout<<"Enter an integer : "<<endl;
        cin>>*(ptr+i);
    }
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}
