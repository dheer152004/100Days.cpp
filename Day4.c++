//friend function
#include<iostream>
using namespace std;

class home
{
 string things;
 public:
  home(){
      cout<<"Playing";
  }
    void play(){
        things="Bat ball ground";
        cout<<"I am playing cricket"<<endl;
    }
    // 1.we create friend function by name mealsoplay
    // 2.we gave reference of class name and its name
    friend void mealsoplay(home g);
};
// 3.we create function definition and gave reference of class
//  name and its name
// 4.now we have access

void menow(home g){
    cout<<"I am friend and playing cricket"<<endl;
}

int main(){
 home obj, obj2;
 obj.play();
 //5.we gave friend function name and gave reference of class
 //  object
 menow(obj); 
 menow(obj2); 
 
 return 0;
}
