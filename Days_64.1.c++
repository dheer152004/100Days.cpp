// C++ static_cast
#include <iostream>
using namespace std;

// static_cast<new_data_type>(expression);

int main() {
    double multiplication=3.6*1.7;
    int result;
    result=multiplication;
    cout<<"Result : "<<result<<endl;
    cout<<"Result : "<<multiplication<<endl;
    result=static_cast<int>(multiplication);
    cout<<"Result : "<<result<<endl;
    cout<<"Result : "<<multiplication<<endl;

    return 0;
}
