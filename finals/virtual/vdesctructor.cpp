//when deleting object pointed by base class pointer, the base class desctructor is only called. to clean up both objects both desctructors must be called, which can be achieved by making desctructor virtual.

#include <iostream>
using namespace std;

class shape{
    public:
    virtual ~shape(){
        cout << "shape deleted" << endl;
    }
};

class triangle:public shape{
    public:
    ~triangle(){
        cout << "triangle deleted" << endl;
    }
};

int main(){
    
    shape* s;
    s = new triangle;
    delete s;

    return 0;
}