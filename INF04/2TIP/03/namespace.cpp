#include <iostream>
#include <iomanip>
using namespace std;

namespace p1 {
    typedef float real;
    const real PI = 3.14159;
}

namespace p2 {
    const double PI = 3.14159265;
}

int main()
{
    cout << p1::PI << endl;
    cout << setprecision(10) << p2::PI << endl;
}
