// C++
#include <iostream>
using namespace std;

class sample
{
    int a,b;
    public:
    void setvalue(){a=25;b=40;}
    friend float mean(sample s);
};

float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}

int main() {
    sample X;
    X.setvalue();
    cout<<"mean Value = "<<mean(X)<<endl;

    return 0;
}
