#include <iostream>
using namespace std;
class circle
{
protected:
    double radius;

public:
    double getRadius()
    {
        return radius;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    circle obj;
    obj.setRadius(2.5);
    cout << "Radius of circle: " << obj.getRadius() << endl;
    cout << "Area of circle: " << obj.compute_area();
    return 0;
}