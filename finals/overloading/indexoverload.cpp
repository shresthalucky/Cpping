#include <iostream>
using namespace std;

class array{
    int arr[3];
    public:
    int& operator[](int i){
        if(i<0||i>3){
            cout << "out of bound" << endl;
        }
        return arr[i];
    }

};

int main(){

    array a;
    for(int i=0; i<3; i++){
        a[i] = i;
    }
    cout << a[2] << endl;

    return 0;
}