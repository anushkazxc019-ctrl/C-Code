#include <iostream>
using namespace std;
class circle
{
private:
    double radius;
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
    friend int main();
};
int main()
{
    circle obj;
    obj.radius = 4.6;
    cout << "Radius is: " << obj.radius << endl;
    cout << "Area is: " << obj.compute_area();
}