#include <iostream>
using namespace std;

class test{
    int a;
    public:
    test(){}
    test(int x){
        cout << "test created" << endl;
        a = x;
    }
    ~test(){
        cout << "test deleted" << endl;
    }

    void* operator new(size_t size){
        cout << "new called" << endl;
        test *tp = ::new test;
        return tp;
    }
    void operator delete(void *p){
        cout << "delete called" << endl;
        free(p);
    }

};

int main(){

    test *tp1;
    tp1 = new test(10);
    delete tp1;

    return 0;
}