#include <iostream>
using namespace std;

class parallelogram{
    protected:
    int length, breadth;
    public:
    parallelogram(int l, int b){
        length = l;
        breadth = b;
    }
    virtual float area() = 0;
};

class rectangle:public parallelogram{
    public:
    rectangle(int l, int b):parallelogram(l, b){}
    float area(){
        return length*breadth;
    }
};

int main(){

    rectangle r(2,3);
    cout << r.area() << endl;

    return 0;
}