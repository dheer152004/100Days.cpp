//C++ Template specilization
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

template<typename T>
T addAll(vector<T> list)
{
    T count=0;
    for(auto& elem: list)
    {
        count+=elem;
    }
    return count;
}
template<>
string addAll(vector<string>list)
{
    int count=0;
    for(const string& elem:list)
    {
        for(const char& chr: elem)
        count+=chr;
    }
    ostringstream ostr;
    ostr<<count;
    string strCount = ostr.str();
    return strCount;
}

int main() {
    vector<int>VecInt={1,2,3,4,5,6,7};
    vector<double>VecDouble={4,5,6,7,3,6,3,6,1,4,7.2};
    vector<string>VecString={"ab","bc"};
    cout<<addAll(VecInt)<<endl;
    cout<<addAll(VecDouble)<<endl;
    cout<<addAll(VecString)<<endl;

    return 0;
}
