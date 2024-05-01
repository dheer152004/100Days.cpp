// C++ Pair
#include <iostream>
using namespace std;

int main() {
    pair<int,string>p;
    //p=make_pair(2,"abc");
    p={3,"abc"};//another way to intilaise
    pair<int,string>&p1=p;
    p.first=99;
    p.second="xyz";
    cout<<p.first<<" "<<p.second<<endl;
    
    
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    pair<int,string>p2;
    cin>>p.first;
    cout<<p.first;
    
    return 0;
}
