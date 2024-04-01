// constructor overloading
#include <iostream>
using namespace std;

class Person {
   private:
    int age;

   public:
    Person() {
        age = 20;
    }
    Person(int a) {
        age = a;
    }

    int getage() {
        return age;
    }
};

int main() {
    Person p1, p2(45);

    cout << "Person1 Age = " << p1.getage() << endl;
    cout << "Person2 Age = " << p2.getage() << endl;

    return 0;
}
