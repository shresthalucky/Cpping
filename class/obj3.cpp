#include <iostream>
using namespace std;

class Sphere{
    float r;
    public:
    void set(float a){
        r = a;
    }
    float vol(){
        return (4*3.14*r*r/3);
    }
};

int main(){

    Sphere s;
    s.set(2);
    float v = s.vol();
    cout << v;
    
    return 0;
}