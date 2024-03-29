//friend class
#include<iostream>
using namespace std;

class employee{
    //0.friend class can access private data members
    private:
    string name, amount;
    
    public:
    //1.we create details in info function of class employee
        void info(){
            name="Dheeraj Kumar";
            amount="Twenty Thousand";
            cout<<"Employe 1 info \n"
                <<name<<"\n"
                <<amount<<endl;
        }
    //4. create friend class of employee in class of employee
    // by using friend.
    friend class employee2;
};

//2.we create another class named employee2 and gave details
//  as info fun.
class employee2{
    public:
    //3. all details are in now access function of class named
    //  employee2
        void access(employee ref){
            cout<<"Employee 2 have access \n"
                <<ref.name<<"\n"
                <<ref.amount<<endl;
        } 
};
 
int main(){
    employee obj1;
    obj1.info();
    //6. we create object named obj2 of employee2.
    employee2 obj2;
    //7. we gave reference of object employee in 
    //  object of employee2.
    obj2.access(obj1);

 return 0;
}
