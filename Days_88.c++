//C++ Get and Put
#include <iostream>
using namespace std;

int main() {
  char ch;
  cout<<"Enter a line of text \n";
  cin.get(ch);
  
  while(ch!='\n')
  {
      cout.put(ch);
      cin.get(ch);
  }
    return 0;
}
