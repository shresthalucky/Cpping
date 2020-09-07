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
    A *ap; //pointer to the object of polymorphic class
    B b, *bp;

    ap = &b; //holds the address of obj of derived class of polymorphic base class
    
    //iff the obj that is being pointed by the base class pointer is a derived class obj
    //pointer being converted is pointer to obj of target type or an object derived from target type

    // cout << typeid(ap).name() << endl;
    cout << typeid(bp).name() << endl;
    // cout << typeid(bbp).name() << endl;
    
    bp = dynamic_cast<B*>(ap); //base class pointer to derived class pointer
    if(bp){
        cout << typeid(bp).name() << endl;
    }

    if(bp == dynamic_cast<B*>(ap)){
        cout << "success" << endl;
    }

    

    return 0;
}