#include <iostream>
using namespace std;

class mass{
    int m;
    public:
    mass(int m){
        this->m = m;
    }
    operator float(){
        return (m/9.81);
    }
};

int main(){

    mass m(100);
    float kg = m;

    cout << kg << endl;

    return 0;
}