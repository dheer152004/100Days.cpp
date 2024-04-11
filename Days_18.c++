// STL Vector
// push_back(); for adding element
//pop_back(); for reomving the last element
// ways to create vector
#include <iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector <T> &v)
{ cout<<"Displaying this vector";
    for(int i=0;i<v.size();i++)
    {
        //both below are same but different ways
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main() {
  
    // int element,size;
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    //  for(int i=0;i<size;i++)
    //  {
    //      cout<<"Enter an element to add to this vector ";
    //      cin>>element;
    //      vec1.push_back(element);//add the element
    //  }
     
     
   // vec1.pop_back();//remove the last element
   
   
    // display(vec1);
    // vector<int>::iterator iter=vec1.begin();
    // //vec1.insert(iter+1,500,566);
    // // (where to locate,copies,what to locate)
    // display(vec1);
    
    
    
    //ways to create a vector
    vector<int> vec1;//zero length vector
    //display(vec1); for displaying vec1
    
    vector<char> vec2(4);//4-element char vector
    // vec2.push_back('5');
    // display(vec2);
    
    vector<char> vec3(vec2);//4-element char vector from vec2
    // display(vec3);
    
    vector<int> vec4(12,7);//6 elements vector of 3s
  //  (times/size, element)
    display(vec4);
    cout<<vec4.size();
    
    return 0;
}
