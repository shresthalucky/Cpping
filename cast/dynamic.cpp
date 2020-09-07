#include <iostream>
#include <typeinfo>
using namespace std;

class A{
    public:
    virtual void f(){}
};

class B: public A{
};


int main(){


    A* a;
    B b1, *b2;
    a = &b1;

    if(typeid(dynamic_cast<B*>(a)) == typeid(b2)){
        cout << "true" << endl;
    }

    return 0;
}