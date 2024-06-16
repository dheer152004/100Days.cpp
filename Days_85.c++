// C++ pointer and array arithmatic
#include <iostream>
using namespace std;


int main() {
    int marks[5]={34,56,54,67,87};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    
    marks[2]=100;
    cout<<marks[2]<<endl; 
    
    for(int i=0;i<=4;i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    cout<<endl;
    
    int*p=marks;
    
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is "<<*(p+4)<<endl;
    return 0;
}
