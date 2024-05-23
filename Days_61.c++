// C++ Reference
#include <iostream>
using namespace std;

int main() {
    int x=1;
    
    //int *pX;
    //*pX=&x;
    cout<<"x has value of x              =="<<x<<endl;
    int *pX=&x;
    cout<<"*pX has value of x            =="<<*pX<<endl;
    cout<<"pX has address of x           =="<<pX<<endl;
    cout<<"&x has address of x           =="<<&x<<endl;
    
    
    int &rX=x;
    cout<<"&rX has address of x          =="<<&rX<<endl;
    cout<<"rX has value of x             =="<<rX<<endl;
    
    
    *pX+=1;
    cout<<"Value of *pX will ++ by 1     =="<<*pX<<endl;
    rX+=1;
    //cout<<x<<endl;
    cout<<"Value of rX will ++ by 1      =="<<rX<<endl;
    cout<<"Address of &rX will same      =="<<&rX<<endl;
    
    pX+=1; //Nothing will happen in value but in address
    cout<<"Address of pX will increase   =="<<pX<<endl;

    return 0;
}
