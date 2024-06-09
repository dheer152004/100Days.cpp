// C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   cout<<"Precision set to 3 digit\n\n";
   cout.precision(3);
   
   cout.width(10);
   cout<<"VALUE";
   cout.width(15);
   cout<<"SQRT_OF_VALUE"<<endl;
   
   int n;
   for(int i=1;n<=5;n++)
   {
       cout.width(8);
       cout<<n;
       cout.width(13);
       cout<<sqrt(n)<<endl;
   }
    
    cout<<endl;
    
    cout.precision();
    cout<<"sqrt(10) = "<<sqrt(10)<<"(default setting)\n\n";
    
    cout<<"Precision set to 5 digits\n";
    cout.precision(5);
    cout<<"sqrt(10) = "<<sqrt(10)<<"\n\n";
    
    return 0;
}
