#include <iostream>
#include <typeinfo>
using namespace std;

class dollar{
    public:
    float amt;
    dollar(){amt =0;}
    dollar(float a){amt=a;}

};

class rupee{
    public:
    float rs;
    rupee(){rs=0;}

    rupee(dollar d){
        rs = (d.amt*100);
    }
    operator dollar(){
        return dollar(rs/100);
    }
};

int main(){

    rupee r;
    dollar d(2300);
    rupee n;
    n.rs = 2345;

    r = d;
    cout << "$" << d.amt << " = " << "Rs." << r.rs << endl;
    d = n;
    cout << "Rs." << n.rs << " = " << "$" << d.amt << endl;

    return 0;
}