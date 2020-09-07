#include <iostream>
using namespace std;

class complex{
    int real, img;
    public:
    complex(){
        real =0; img = 0;
    }
    complex(int a, int b){
        real = a;
        img = b;
    }
    // complex operator +(complex &c){
    //     real = real + c.real;
    //     img = img + c.img;
    //     return *this;
    // }

    friend complex operator +(complex &a, complex &b);

    complex operator ++(){
        ++real;
        ++img;
    }

    complex operator ++(int){
        real++;
        img++;
    }

    // complex operator =(complex &c){
    //     real = c.real;
    //     img = c.img;
    // }

    void operator==(complex &c){
        if(real == c.real){
            cout << 1;
        }else {
            cout << 0;
        }
    }

    void operator<(complex&c){
        if(real < c.real){
            cout << 1;
        }else{
            cout << 0;
        }
    }

    void operator>(complex &c){
        if(real > c.real){
            cout << 1;
        }else{
            cout << 0;
        }
    }

    void operator!=(complex &c){
        if(real != c.real){
            cout << 1;
        }else {
            cout << 0;
        }
    }

    void display(){
        cout << real << " + " << img << " i" << endl;
    }
};

complex operator+(complex &a, complex &b){
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

int main(){

    complex c1(1, 1);
    complex c2(2, 3);
    complex c3;


    c3 = c1+c2;
    c3.display();
    c1.display();
    c1++;
    // c3 = c1;
    c3.display();

    c1 == c2;
    c3 == c1;

    return 0;
}