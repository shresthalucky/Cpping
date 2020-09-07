#include <iostream>
using namespace std;

struct sphere{
    float radius;
    void set(float r){
        radius = r;
    }
    float volume(){
        return (4*3.14*radius*radius*radius/3);
    }
};

int main(){
    sphere s;
    s.set(2);
    cout << "volume " << s.volume();
    return 0;
}