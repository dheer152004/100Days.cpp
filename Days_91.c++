#include<iostream>
using namespace std;

class person{
    protected:
    char name[40];
    public:
    void setname(){
        cout<<"Enter name :";
        cin>>name;
    }
    void printname(){
        cout<<"\n Name is :"<<name;
    }
};

int main(){
    person*persPtr[100];
    int n=0;
    char choice;

    do
    {
     persPtr[n]=new person;
     persPtr[n]->setname();
     n++;
     cout<<"Enter another (y/n)?";
     cin>>choice;
    }
    while (choice=='y');
    
    for(int j=0;j<n;j++)
    {
        cout<<"\nPerson number "<<j+1;
        persPtr[j]->printname();
    }
    cout<<endl;

    return 0;
}
