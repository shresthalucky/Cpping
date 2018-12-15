#include <iostream>
#include <cmath>
using namespace std;

int power(int b, int p){
    return pow(b, p);
}

float power(float b, int p){
    return pow(b, p);
}

int main(){
    cout << power(3, 3) << endl;
    cout << power(1.23f, 2) << endl;
    return 0;
}