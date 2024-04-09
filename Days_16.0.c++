// templates with function
#include <iostream>
using namespace std;

// float funcAverage(float a, float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}
//In above we have done average of two number but it may difficut if we 
//use different data types so we made template and then use them according to 
//our need.

template <class T>
    void swapp(T &a,T &b)
    {
        T temp=a;
        a=b;
        b=temp;
    }
    
    
int main() {
    float a,b;
//     a=funcAverage2(10.6,2.6);
//     b=funcAverage(10,2.6);
//     cout<<"The average of these numbers is "<<a<<endl;

a=funcAverage(10.6,2);
cout<<"The average of these numbers is "<<a<<endl;


int x=5,y=7;
swapp(x,y);
cout<<x<<endl<<y;


    return 0;
}
