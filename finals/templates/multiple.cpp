#include <iostream>
using namespace std;

template<class T, class S>
class test{
    T a;
    S b;
    public:
    test(T a, S b){
        this->a = a;
        this->b = b;
    }
    void data();
};

template<class T, class S>
void test<T, S>::data(){
    cout << a << "\t" << b << endl;
}


int main(){
    test<int, int> a(1,2);
    test<int, float> b(2, 4.4);
    a.data();
    b.data();

    return 0;
}