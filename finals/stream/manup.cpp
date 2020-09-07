#include <iostream>
#include <iomanip>
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

    // friend istream &operator>>(istream &is, complex &c);
    friend ostream &operator<<(ostream &os, complex &c);
};

ostream& tab(ostream &os){
    os << '\t' << flush;
    // return os;
}


// ostream &operator>>(istream &is, complex &c){
//     is >> c.real >> c.img;
// }

ostream &operator<<(ostream &os, complex &c){
    os << c.real << "+" << c.img;
    os << flush;
    return os;
}

int main(){
    cout << "a" << tab << "b" << tab << "c" << endl;
    
    complex c(10, 20);
    cout << c;
    return 0;
}