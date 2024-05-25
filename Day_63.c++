//C++ Typecasting
#include <iostream>
using namespace std;

//(type) expression
int main() {
    int num1, num2;
    float result;
    
    cout<<"Enter the number1 : ";
    cin>>num1;
    cout<<"Enter the number2 : ";
    cin>>num2;
    cout<<endl;
    
     cout<<"This is Implicit conversion"<<endl;
     cout<<"Result:"<<num1/num2<<endl;
     
     cout<<"This is Explicit conversion"<<endl;
        result =(float)num1/num2;
        cout<<"Result:"<<result<<endl;

    return 0;
}
