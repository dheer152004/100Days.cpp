//C++ Pure Virtual Function
#include <iostream>
#include <string>
using namespace std;

class AbsPerson{
    public:
    virtual void Service1 (int n);
    virtual void Service2 (int n)=0;
}; 
void AbsPerson::Service1(int n)
{
    Service2(n);
}
class person : public AbsPerson 
{
    public:
    void Service2(int n);
};

void person::Service2(int n)
{
    cout<<"The number of Years of service:"<<(58-n)<<endl;
}

int main() {
    person Father,Son;
    Father.Service1(50);
    Son.Service2(20);
    return 0;
}
