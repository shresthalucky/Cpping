//multiple exception can be handled using multiple throw and multiple catch statements

#include <iostream>
using namespace std;

class negative{};
class positive{};
class zero{};

void test(int x){
    try{
        if(x>0){
            throw positive();
        }else if(x<0){
            throw negative();
        }else{
            throw zero();
        }
    }catch(positive){
        cout << "Positive number" << endl;
    }catch(negative){
        cout << "Negative number" << endl;
    }
}

int main(){
    test(0);
    test(10);
    test(-10);
    return 0;
}