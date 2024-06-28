// count Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

int arr[]={33,22,33,44,33,55,66,77,33,33,33,27,34,56,7,5};

int main() {
    int search;
    cout<<"What do you search in array?"<<endl;
    cin>>search;
    
    int n=count(arr,arr+20,search);
    cout<<"There are "<<n<<" "<<search<<" in arr."<<endl;

    return 0;
}
