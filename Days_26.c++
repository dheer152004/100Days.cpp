// Pointer -> adderss , value, pointer and array
#include <iostream>
using namespace std;

int main() {
    int a=10;
    int*aptr=&a;
    
    cout<<&a<<endl;
    cout<<aptr<<endl;
    
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<*aptr<<endl;
    
    aptr++;
    cout<<aptr<<endl;
    aptr--;
    cout<<aptr<<endl;
    //due to pointer value become 20
    //*aptr=20; and *aptr=&a;
    cout<<a<<endl;
    
    cout<<(aptr--)-(aptr++)<<endl;
    
    cout<<"_______________________________________________________________"<<endl;
    
    char ch='a';
    char*cptr=&ch;
    cout<<&ch<<endl;
    cout<<ch<<endl;
    cout<<*cptr<<endl;
    
    cptr++;
    cout<<*cptr<<endl;
    
    cout<<"_______________________________________________________________"<<endl;
    
    int arr[]={10,20,30,40};
    cout<<*arr<<endl;
    
    cout<<"Printing arr"<<endl;
    
    int*ptr=arr;
    for(int i=0;i<4;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    
    cout<<"Another way"<<endl;
    
    for(int i=0;i<4;i++)
    {
        // arr++; it is illegal
        cout<<*(arr)<<endl;
        //in below i is index so i will incraese 
        //due to loop
        cout<<*(arr+i)<<endl; 
    }
    return 0;
}
