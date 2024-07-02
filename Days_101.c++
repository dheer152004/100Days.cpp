#include <iostream>
using namespace std;

class Distance
{
private:
    const float MTF;
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0), MTF(3.2808333F) {}

    explicit Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = (fltfeet - feet) * 12; // Calculate remaining inches
    }

    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

void fancydist(Distance d)
{
    cout << "(in feet and inches) = ";
    d.showdist();
    cout << endl;
}

int main()
{
    Distance dist1(2.35F);
    
    cout << "dist1 ";
    dist1.showdist();
    cout << endl;

    float mtrs = 3.0F;
    cout << "fancydist(mtrs): ";
    //fancydist(mtrs);

    return 0;
}
