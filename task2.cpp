#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
// T1 = int
// T2 = float
// T3 = double
class ClassName
{
private:
public:
    // variable declaration 
    T1 a;
    T2 b;
    T3 c;

    // parameterized constructor
    ClassName(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
};



int main()
{
    // initializing
    ClassName<int, float, double> obj1(1, 2.2, 2.33333333); 
    ClassName<float, int, double> obj2(2.2, 1, 2.33333333); 
    ClassName<int, double, float> obj3(1, 2.33333333, 2.2);

    // printing object data
    cout << "int, float, double: " << obj1.a << " " << obj1.b << " " << obj1.c << endl;
    cout << "float, int, double: " << obj2.a << " " << obj2.b << " " << obj2.c << endl;
    cout << "int, double, float: " << obj3.a << " " << obj3.b << " " << obj3.c << endl;
    return 0;
}