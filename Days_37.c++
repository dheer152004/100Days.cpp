// Map
#include <iostream>
#include<map>
using namespace std;

//we have made function for convinient 
void print(map <int, string>&m)
{
    cout<<"size of the map "<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
void print2(map <int, int>&m2)
{
    cout<<"size of the map "<<m2.size()<<endl;
    for(auto &pr : m2)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main() {
    //map always stored in sorted oreder 
    map<int,string>m;
    m[2]="riddhi";
    m[4]="rohit";
    m[3]="radhika";
    m[1]="rohan";
    m.insert({5,"raja"});
    map<int,int>m2;
    m2[6];
    //this will print 6 in first argument secound will default =0
    print2(m2);
    cout<<endl;
    
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
     cout<<(*it).first<<" "<<(*it).second<<endl;
    } cout<<endl;
    
    
    //shortcut of above without creating iterator
    for(auto &pair:m)
    {
     cout<<pair.first<<" "<<pair.second<<endl;
    } cout<<endl;
    
    print(m);
    
    return 0;
}
