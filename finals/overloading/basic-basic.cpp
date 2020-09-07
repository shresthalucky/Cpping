#include <iostream>
using namespace std;
int main(){
    int a = 3;
    int b = 10;
    float c = static_cast<float>(a/b);
    cout << c << endl;
    return 0;
}