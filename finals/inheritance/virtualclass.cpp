#include <iostream>
using namespace std;

class grandparent{
    public:
    void data(){
        cout << "data from grandparent";
    }
};

class parent1:virtual public grandparent{
    public:
    // void data(){
    //     cout << "data from parent1";
    // }
};

class parent2:virtual public grandparent{
    public:
    // void data(){
    //     cout << "data from parent2";
    // }
};

class child3:public parent1, public parent2{
    public:
    // void show(){
    //     data();
    // }
};

int main(){

    child3 c;
    c.data();

    return 0;
}