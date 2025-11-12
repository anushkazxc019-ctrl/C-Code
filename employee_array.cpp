#include <iostream>
using namespace std;
class employee
{
    int id;
    char name[20];

public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
}
void employee::putdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}
int main()
{
    employee emp;
    emp.getdata();
    emp.putdata();
}