// C++ Overloading
#include <iostream>
#include <string>
using namespace std;

// << Insertion ostream
// >> Extraction istream
class Base{
    private:
    string name;
    string id;
    
    public:
    friend ostream &operator<<(ostream &out,Base &a);
    friend istream &operator>>(istream &input,Base &a);
    
    void display(){
        cout<<endl<<"You entered "<<name;
    }
};
ostream &operator<<(ostream &out,Base &a){
    out<<"Enter your name : "<<a.name<<endl;
    return out;
}
istream &operator>>(istream &input,Base &a){
    input>>a.name;
    return input;
}

int main() {
    Base obj; 
    cout<<obj;
    cin>>obj;
    obj.display();

    return 0;
}
