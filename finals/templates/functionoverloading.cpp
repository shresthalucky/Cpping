#include <iostream>
using namespace std;

template<class T>
T absolute(T a){
    if(a < 0){
        return (-a);
    }else{
        return a;
    }
}

int main(){

    cout << absolute(-1) << endl;
    cout << absolute(2.3) << endl;
    cout << absolute(-1.4) << endl;


    return 0;
}