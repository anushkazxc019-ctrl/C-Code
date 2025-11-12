#include <iostream>
using namespace std;
class Anny
{
protected:
    int val;
    void show()
    {
        cout << "Value:" << val << endl;
    }
};
class Derived : protected Anny
{
    void run()
    {
        val = 8;
        show();
    }
    friend int main();
};
int main()
{
    Derived obj;
    obj.run();
    return 0;
}