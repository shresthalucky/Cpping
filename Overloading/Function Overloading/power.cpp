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
    cout << pow(3, 3) << endl;
    cout << pow(1.23, 2) << endl;
    return 0;
}