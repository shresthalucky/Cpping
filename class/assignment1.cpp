#include <iostream>
using namespace std;

class Sphere{
    float r;
    public:
    void set(float a){
        r = a;
    }
    float area(){
        return (4*3.14*r*r);
    }
};

int main(){

    Sphere s;
    s.set(5);
    float v = s.area();
    cout << v;
    
    return 0;
}