#include <iostream>
using namespace std;

class Vector 
{
    int *v;
    int size;
public:
    Vector(int m) {
       size = m;
        v = new int[size];
        for (int i = 0; i < size; i++)
            v[i] = 0;
    }
    Vector(int *a, int m) {
       // size = m;
     //   v = new int[size];
        for (int i = 0; i < size; i++)
            v[i] = a[i];
    }
    int operator*(Vector &y) {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += this->v[i] * y.v[i];
        return sum;
    }
    void display() {
        for (int i = 0; i < size; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    void setValues(int *a) {
        for (int i = 0; i < size; i++)
            v[i] = a[i];
    }
};

int main() {
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    Vector v1(3);
    Vector v2(3);
    v1.setValues(x); // Setting values for v1
    v2.setValues(y); // Setting values for v2

    cout << "v1 = ";
    v1.display();
    cout << "v2 = ";
    v2.display();

    int R = v1 * v2;
    cout << "R = " << R;

    return 0;
}
