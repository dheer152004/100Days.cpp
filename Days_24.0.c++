// Array Binary Search
//for binary search of array must be sorted
#include <iostream>
using namespace std;

int binaryseacrh(int arr[], int n,int key)
    { int s=0;//start
      int e =n;//end
      
      while(s<=e)
      {
          int mid=(s+e)/2;
          
          if(arr[mid]==key)
          {
              return mid;
          }
          else if(arr[mid]>key)
          {
              e=mid-1;
          }
          else
          {
              s=mid+1;
          }
      }
        return -1;
    }

int main() {
    int n;
    cout<<"Enter the no. of element : "<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements in sorted way : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"What you want to search"<<endl;
    cin>>key;
    
    cout<<"Index place is : "<<binaryseacrh(arr,n,key)<<endl;
    cout<<"Elment place is : "<<(binaryseacrh(arr,n,key)+1)<<endl;

    return 0;
}
