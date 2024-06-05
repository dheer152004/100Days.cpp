// C++ setw
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    /*
    int colOne=15;
    int colTwo=1;
    int colThree=15;
    
    cout<<setw(colOne)<<left<<"Name";
    cout<<setw(colTwo)<<left<<" ";
    cout<<setw(colThree)<<right<<"Score"<<endl;
    */
    
    cout<<setw(15)<<left<<"Name";
    cout<<setw(1)<<left<<" ";
    cout<<setw(15)<<right<<"Score"<<endl;
    
    cout<<setw(15)<<left<<"==============="
        <<setw(1)<<left<<" "
        <<setw(15)<<left<<"==============="<<endl;
    
    cout<<setw(15)<<left<<"Dheeraj"
        <<setw(1)<<left<<" "
        <<setw(15)<<right<<1200<<endl;
        
    cout<<setw(15)<<left<<"Anuj"
        <<setw(1)<<left<<" "
        <<setw(15)<<right<<1100<<endl;
        
    cout<<setw(15)<<left<<"vishal"
        <<setw(1)<<left<<" "
        <<setw(15)<<right<<1350<<endl;
    
    return 0;
}
