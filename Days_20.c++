// STL map
//size function
//empty function
//insert function
//max_size function
#include <iostream>
#include <string>
#include <map>
using namespace std;


//map is an associative array
int main() {
    map<string, int>marksMap;
  
    //name comes because string declared first
    marksMap["Rohan"] =20;
    marksMap["Jack"] = 59;
    marksMap["Harry"] = 98;
    
    //insert method in map
    marksMap.insert({{"Dheeraj",99},{"Vishal",88}}); 
    map<string, int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n"<<endl;
    }

    //size function
    cout<<"This size is: "<<marksMap.size()<<endl; 
    //maximum size function
    cout<<"This max.  is: "<<marksMap.max_size()<<endl;
    //empty function
    cout<<"This empty map is: "<<marksMap.empty()<<endl;

  
    return 0;
}
