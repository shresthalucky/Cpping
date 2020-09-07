#include <iostream>
#include <cmath>
using namespace std;

class Sphere{
    float v;
    public:
    void get_volume(float a){
        v = a;
    }
    float diameter(){
        return cbrt(24*v/4*1/3.14);
    }
};

int main(){

    Sphere s;
    s.get_volume(109);
    float d = s.diameter();
    cout << d;
    
    return 0;
}