// Templates
#include <iostream>
using namespace std;

template <class t>
// t is basically data type which is not assgin in starting
// like float, int;
class vector{
    public:
    t*arr;
    int size;
    public:
     vector(int m){
         size =m;
         arr= new t[size];
     }
    t sum(vector &v){
        t d=0;
        for(int i=0; i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
            return d;
    }
};

int main() {
    //we have to assign the data type of t
    vector <float>v1(3);
    v1.arr[0]=4;
    v1.arr[1]=2;
    v1.arr[2]=3;
    
    vector <float> v2(3);
    v2.arr[0]=2.2;
    v2.arr[1]=4.4;
    v2.arr[2]=3.3;
    
    double a=v1.sum(v2);
    cout<<a;

    return 0;
}
