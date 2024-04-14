// STD Function objects(functors)
//function wrapped in a class so that it available like an object

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
    int arr[]={1,33,25,12,54,37 ,7,18,77};
    
    //by default it will print sorted array in ascending order 
   sort(arr,arr+8);
   
  //  sort(arr,arr+8,greater<int>());
  // for descending order
    for(int i=0;i<9;i++)
    {
    cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}
