// C++ Inheritance
#include <iostream>
using namespace std;
const int LEN=80;

class employee
{
    char name[LEN];
    unsigned long number;
    public:
        void getdata()
        {
            cout<<"Enter the last name: "; cin>> name;
            cout<<"Enter number: ";cin>>number;
        }
        void putdata() const
        {
            cout<<"Name: "<<name;
            cout<<"Number :"<<number;
        }
};

class manager: public employee
{
    char title[LEN];
    double dues;
    public:
        void getdata(){
            employee::getdata();
            cout<<"  Enter title: ";          cin>>title;
            cout<<"  Enter golf club dues: "; cin>>dues;
        }
        void putdata() const{
            cout<<"Title: "<<title<<endl;
            cout<<"Golf club dues: "<<dues<<endl;
        }
};

class scientist: public employee
{
    int pubs;
    public:
         void getdata()
         {
             employee::getdata();
             cout<<"Enter number of publication: ";cin>>pubs;
         }
         void putdata() const
         {
             employee::putdata();
             cout<<"Number of publication: "<<pubs<<endl;
         }
};

class laborer: public employee
{
    
};

int main() {
    manager m1,m2;
    scientist s1;
    laborer l1;
    
    cout<<"-----Enter data for manager 1-----"<<endl;
    m1.getdata();
    cout<<"-----Enter data for manager 2-----"<<endl;
    m2.getdata();
    cout<<"-----Enter data for scientist 1-----"<<endl;
    s1.getdata();
    cout<<"-----Enter data for laborer 1-----"<<endl;
    l1.getdata();
    
    cout<<endl;
    cout<<endl;
    
    cout<<"Data on manager 1"<<endl;
    m1.putdata();
    cout<<"Data on manager 2"<<endl;
    m2.putdata();
    cout<<"Data on scientist 1"<<endl;
    s1.putdata();
    cout<<"Data on laborer 1"<<endl;
    l1.putdata();
    
    return 0;
}
