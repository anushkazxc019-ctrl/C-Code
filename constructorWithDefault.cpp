// Find area of rectangle with optical length
#include <iostream>
using namespace std;
double calArea(double l, double b = 10.0)
{
    return l * b;
}
int main()
{
    cout << "Area 1: " << calArea(10) << endl;
    cout << "Area 2: " << calArea(5, 9);
    return 0;
}