//list of exceptions are specified to suffixing the (throw) statement along with exceptions in a function decleration and definition

#include <iostream>
using namespace std;

class negative{};
class positive{};
class zero{};
// void test(int) throw(negative, positive);

// void test(int x) throw(negative, positive){
void test(int x){
    try{
        if(x>0){
            throw positive();
        }else if(x<0){
            throw negative();
        }
    }catch(positive){
        cout << "Positive number" << endl;
    }catch(negative){
        cout << "Negative number" << endl;
    }
}

int main(){

    test(10);
    test(-10);
    return 0;
}