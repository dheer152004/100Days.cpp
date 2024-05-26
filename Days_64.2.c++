#include <iostream>
using namespace std;
int main()
{
    float f = 3.5;
    int a = f;
    cout << "The Value of a: " << f<<endl;
    cout << "The Value of a: " << a<<endl;
    
    
    float b = static_cast<float>(f);
    cout << "The Value of b: " << b<<endl;
}
