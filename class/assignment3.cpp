#include <iostream>
#include <cmath>
using namespace std;

class wall{
    float l, v, b, h, V, N;
    float vol(){
        return l*b*h;
    }
    float number(){
        V = vol();
        return V/v;
    }
    public:
    float c;
    void setdata(float a, float br, float c){
        l = a;
        b = br;
        h = c;
    }
    void setvol(float x){
        v=x;
    }
    void setrate(float r){
        c =r;
    }
    float cost(){
        N = number();
        return (c*N);
    }
    float getvolume(){
        return vol();
    }
    int getnumber(){
        return number();
    }
};

int main(){

    wall w;
    w.setdata(6,5,4);
    w.setvol(0.5);
    w.setrate(2.5);
    cout << w.cost() << endl;

    cout << w.getvolume() << endl;
    cout << w.getnumber() << endl;
    
    return 0;
}