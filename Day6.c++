// Multi level Inheritence
#include <iostream>
using namespace std;

class parent{
    protected:
    string money;
    string place;
    
    public:
        void parentassets(){
            money="10 lakhs";
            place="5 Bibha";
            cout<<"Money access"<<money<<" "<<place<<endl;
        }
};

class child:public parent{
    protected:
    string money1;
    string place1;
    public:
     void childassets(){
         money1="5 Lakh";
         place1="1 Bigha";
            cout<<"Child Assets inherited from parent access"<<"Money\n"<<money1<<" "<<"area\n"<<place1<<endl;
        }
};

class newchild:public child{
    string money2;
    string place2;
    public:
     void newassets(){
         money2="3 Lakh";
         place2="1.5 Bigha";
            cout<<"NewChild Assets inherited from parent access"<<"Money\n"<<money2<<" "<<"area\n"<<place2<<endl;
            cout<<"NewChild Assets inherited from child access"<<"Money\n"<<money1<<" "<<"area\n"<<place1<<endl;
        }
};

int main() {
    parent obj;
    obj.parentassets();
    child obj2;
    obj2.childassets();
    newchild obj3;
    obj3.parentassets();

    return 0;
}
