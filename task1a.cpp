#include<iostream>
using namespace std;
class a{
    int a1 = 10;

    protected :
      int a2 = 20;

    public:
      int a3 = 100;
    
    void y1()
    { 
        cout<< a1<<endl;
    }
};
class b : public a{
    protected:
        int a2 = 20;

    public :
        int a3 = 100;
    
    void x1()
    {
        a::y1();
        cout<<a2<<endl;
        cout<<a3<<endl;
    }
};
int main()
{
  b obj;
  obj.x1();
}
 
 
