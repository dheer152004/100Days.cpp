//Current Time
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

int main() {
    
    chrono::system_clock::time_point now =chrono::system_clock::now();
    time_t now_c =chrono::system_clock::to_time_t(now);
    cout << "Current time: " <<ctime(&now_c) <<endl;
    
    return 0;
}
