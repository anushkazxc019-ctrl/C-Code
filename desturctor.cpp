#include<iostream>
using namespace std;
class test{
    public:
    test(){
    cout<<"constructor is called"<<endl;
}
~test(){
    cout<<"Destructor is called"<<endl;
}
};
main(){
    test t;
}
