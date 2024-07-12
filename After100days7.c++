#include<iostream>
using namespace std;

class Vehicle
{
private:
		void piston()
		{
			cout<<"4 piston\n";
		}

		void manWhoMade()
		{
			cout<<"Dheeraj Kummar\n";
		}
	public:
		void company()
		{
			cout<<"DEREK\n";
		}
		void model()
		{
			cout<<"D1\n";
		}
		void color()
		{
			cout<<"Black\n";
		}
		void cost()
		{
			cout<<"Rs. 60000 to 900000\n";
		}
		void oil()
		{
			cout<<"PETRO\n";
		}
};
int main()
{
	
	Vehicle obj;
	obj.company();
	obj.model();
	obj.color();
	obj.cost();
	obj.oil();
}
