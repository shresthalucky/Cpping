#include <iostream>
using namespace std;

class Base
{
  public:
    virtual ~Base()
    {
        cout << "base" << endl;
    }
};

class Derived : public Base
{
  public:
    ~Derived()
    {
        cout << "derived" << endl;
    }
};

int main()
{

    Base *ptr;
    ptr = new Derived();
    delete ptr;

    return 0;
}