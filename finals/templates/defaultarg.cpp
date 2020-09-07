#include <iostream>
using namespace std;

template<class T=int, int size=5>
class Array{
    T arr[size];
    public:
    void getdata(){
        for(int i=0; i<size; i++){
            cin >> arr[i];
        }
    }
    void display(){
        for(int i=0; i<size; i++){
            cout << arr[i] << '\t';
        }
        cout << endl;
    }

    T sum();
    float avg(){
        return sum()/size;
    }
};

template<class T, int size>
T Array<T, size>::sum(){
    T sum;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum; 
}

int main(){
    
    Array<float, 4> fa;
    fa.getdata();
    fa.display();
    cout << fa.sum() << endl;
    cout << fa.avg() << endl;
    // fa.avg();
    return 0;
}