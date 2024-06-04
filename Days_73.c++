// Online C++ 
#include<iostream>
#include<cstring>
#include<iostream>
using namespace std;

int main() {
char str[20];
int i,len;
cout<<"Enter a string"<<endl;
cin.getline(str,20);
len=strlen(str);
cout<<"Pattern is\n"<<endl;
for(i=1;i<=len;i++)
{
cout.write(str,i);
cout<<endl;
}
for(i=len-1;i>=0;i--)
{
cout.write(str,i);
cout<<endl;
}
cout<<endl;
    return 0;
}
