#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;
};
int main()
{
    car carobj1;
    carobj1.brand = "Audi";
    carobj1.model = "Xuv";
    carobj1.year = 1999;

    car carobj2;
    carobj2.brand = "ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;
    cout<<"Information about first car:"<<endl <<"Brand of car: " << carobj1.brand<<endl << "The model of car: " << carobj1.model <<endl<< "year: " <<carobj1.year << endl;
    cout<<"Information about second car:"<<endl <<"Brand of car: " << carobj2.brand<<endl << "The model of car: " << carobj2.model <<endl<< "year: " <<carobj2.year << endl;
    return 0;
}