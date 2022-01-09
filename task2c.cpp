#include<iostream>
using namespace std;
class a{
    public:
    a(int x)
    {
        cout<<"a: class constructor\n";
        cout<<endl;
    }
};
class b : public a{
    public:
    b( int x , int y): a(x)
    {
        cout<<"b: class constructor\n";
        cout<<endl;
    }
};
int main()
{
    b obj(4,5);
}
 
