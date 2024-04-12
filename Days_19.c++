// STL List
// sorting
//merging
//reversing

#include <iostream>
#include<list>//using stl list
using namespace std;

void display(list<int> &lst){
     list<int>:: iterator it;
     for(it=lst.begin();it!=lst.end();it++)
     {
           cout<<*it<<endl;
     }
     cout<<"\n";
}

int main() {
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(13);
    
    
    /*
    //instead of writing all of these we made loop in function
    list<int>:: iterator iter;
    iter=list1.begin(); // points to first element
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++;
    cout<<*iter<<endl;
    iter++; */
    
    /*
    //for removing elements
    display(list1);
    list1.pop_back();//removes the last element
    list1.pop_back();//removes the last element 2nd time
    display(list1);
    list1.pop_front();//removes the first element 
    display(list1);
    list1.remove(9); //remove all element which have 9 in list 
    display(list1);
    */
    

    list<int> list2(4); //Empty list of size 7
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    *iter=12;
    iter++;
    
    
    
    cout<<"This is list 1"<<endl;
    display(list1);
    cout<<"This is list 2"<<endl;
    display(list2);
    
    /*
    //reverse the list
    list1.reverse();
    cout<<"Reverse of list 1"<<endl;
    display(list1);
    */
    
    /*
    // merging
    list1.merge(list2);
    cout<<"After merging"<<endl;
    display(list1);
    */
    
    
    /*
    //sorting the list
    list1.sort();
    display(list1); 
    */
    
    
    /*
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"After merging & sorting"<<endl;
    display(list1);
    */
    return 0;
}
