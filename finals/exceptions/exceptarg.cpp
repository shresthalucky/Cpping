//multiple exception can be handled using multiple throw and multiple catch statements

#include <iostream>
using namespace std;

class negative{
    public:
    int n;
    negative(int n){
        this->n = n;
    }
};
class positive{
    public:
    int n;
    positive(int n){
        this->n = n;
    }
};
class zero{};

void test(int x){
    try{
        if(x>0){
            throw positive(x);
        }else if(x<0){
            throw negative(x);
        }else{
            throw zero();
        }
    }catch(positive e){
        cout << e.n << " is a Positive number" << endl;
    }catch(negative e){
        cout << e.n << " is a Negative number" << endl;
    }catch(zero){
        cout << "Zero number" << endl;
    }
}

int main(){
    test(0);
    test(10);
    test(-10);
    return 0;
}