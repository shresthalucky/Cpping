#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    
    int a;
    float *fp;
    
    cout << typeid(a).name() << endl;
    cout << typeid(fp).name() << endl;

    if(fp = reinterpret_cast<float*>(a)){
        cout << "success" << endl;
    }
        
    return 0;
}