//virtual functions to obtain runtime polymorphism

#include <iostream>
using namespace std;

class animal{
    public:
    virtual void call(){
        cout << "I am animal" << endl;
    }
};

class cat:public animal{
    public:
    void call(){
        cout << "I am cat" << endl;
    }
};

class dog:public animal{
    public:
    void call(){
        cout << "I am dog" << endl;
    }
};

int main(){

    animal *pa;
    cat c;
    pa = &c;
    pa->call();

    return 0;
}