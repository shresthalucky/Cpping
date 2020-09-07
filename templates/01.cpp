#include <iostream>
using namespace std;

template <class x, class y>
// void area(x l, y b){
//     cout << l*b << endl;
// }

void swapping(x &a, y &b){
    x temp = a;
    a = b;
    b = temp;
}

int main(){
    // cout << 12*1.11 << endl;
    // area(10, 2);
    // area(2.3, 3);
    // area(2, 4.4);
    // area(5.31, 4.5);
    int a = 1;
    int b = 2.45;
    cout << "a: " << a << " b: " << b << endl;
    swapping(a, b);
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}