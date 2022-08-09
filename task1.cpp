#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
// int = T1
// float = T2

T3 add(T1 a, T1 b, T2 c, T2 d)
{
    T3 r;
    r =  a + b + c + d;
    return r;
}

int main()
{
    // add(datatype, datatype, returntype)
    cout << "int + int + float + float: " << add<int, float, float>(3, 4, 1.2, 2.4) << endl;
    cout << "float + float + int + int: " << add<float, int, float>(3.4, 4.2, 1, 2) << endl;
    cout << "int + int + int + int: " << add<int, int, int>(3, 4, 1, 2) << endl;
    cout << "float + float + float + float: " << add<float, float, float>(3.4, 4.2, 1.2, 2.5) << endl;

    return 0;
}