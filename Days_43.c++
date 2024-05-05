// Static Funtion/Keyword
#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"The id of this employee is "<<id<<" and this is employee number is "<<count<<endl;
    }
    static void getcount(){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count=1;//defualt value is Zero 

int main() {
    Employee Dheeraj,Navneet,Kartik;
    
    Dheeraj.setdata();
    Dheeraj.getdata();
    Employee::getcount();
    cout<<endl;
    
    Navneet.setdata();
    Navneet.getdata();
    Employee::getcount();
    cout<<endl;
    
    Kartik.setdata();
    Kartik.getdata();
    Employee::getcount();

    return 0;
}
