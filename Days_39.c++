// C++ Vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector<int>*vp=new vector<int>();//dynamic allocation
    vector<int> v;//static allocation
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=100;
    v[2]=290;
    v[3]=1090;
    v.push_back(400);
    v.push_back(3090);
    
    
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;
    cout<<v[7]<<endl;
    
    
    cout<<"size of vectors is "<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<"Size of vector "<<i<<" is "<<v[i]<<endl;
    }
    
    v.pop_back();
    
    for (auto itr :v){

    cout<< itr << " ";}

    return 0;
}
