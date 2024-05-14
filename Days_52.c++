//C++ Copy Constructor
#include <iostream>
using namespace std;

class Student{
    int roll;
    int mark;
    public:
    Student(int m,int n)
    {
        roll=m;
        mark=n;
    }
    Student(Student &t);
    void show_data()
    {
        cout<<"Roll no. "<<roll<<endl; 
        cout<<"Mark "<<mark<<endl; 
    }
};
Student::Student(Student &t)
{
    roll=t.roll;
    mark=t.mark;
}

int main() {
    cout<<"Parameterized constructor output of Dheeraj"<<endl;
    Student Dheeraj(60,130);
    Dheeraj.show_data();
    cout<<"Copy constructor output of stu which was copied by Dheeraj"<<endl;
    Student stu(Dheeraj);
    stu.show_data();
    return 0;
}
