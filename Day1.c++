//operator overloading
#include<iostream>
using namespace std;

class Increase{
int value;
public:
Increase(){
     value=10;
}

void operator ++(){
     value=value+5;
}
void display(){
     cout<<"Value is "<<value<<"\n"<<endl;
}
};

int main(){
Increase Inc;
Inc.display();
++Inc;
Inc.display();
 return 0;
}
