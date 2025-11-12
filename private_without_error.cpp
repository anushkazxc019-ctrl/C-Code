#include <iostream>
using namespace std;
class circle
{
private:
    double radius;

public:
    double getRadius()
    {
        return radius;
    }
    void setRadius(double val)
    {
        radius = val;
    }
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    circle obj;
    obj.setRadius(1.8);
    cout << "Radius is: " << obj.getRadius() << endl;
    cout << "Area is: " << obj.compute_area();
}