#include <iostream>
using namespace std;
class A
{
public:
    int val;
    A(int x)
    { // parameterized constructor
        val = x;
    }
};
int main()
{
    A a(10); // explicity
    cout << a.val;
    return 0;
}