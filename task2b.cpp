#include<iostream>
using namespace std;
class Parent{
    public:
    ~Parent()
    {
        cout<<" Parent class constructor\n";
    }
};
class Child : public Parent{
    public:
    ~Child()
    {
        cout<<" Child class constructor\n";
    }
};
int main()
{
    Child obj;
}
