// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
using namespace std;

void print(map<int,string>&m)
{
   for(auto &pr:m)
   {
       cout<<pr.first<<" "<<pr.second<<endl;
   }
}
int main() {
    map<int,string>m;
    m[2]="riddhi";
    m[4]="rohit";
    m[3]="radhika";
    m[1]="rohan";
    m.insert({5,"raja"});
    m.erase(3);
  // m.clear();
    print(m);


    cout<<endl;

    //we made for safety issue beacuse 9 donot exist in this map
    auto it=m.find(9);
    if(it!=m.end())
    m.erase(it);

    auto it1=m.find(1);
    if(it1==m.end())
    {
        cout<<"No value";
    }
    else{
        cout<<(*it1 ).first<<" "<<(*it1).second;
    }

    return 0;
}
