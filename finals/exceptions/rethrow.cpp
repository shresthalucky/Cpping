//exceptions is rethrown if a catch block cannot handle a particular exception it has caught. this causes the originally thrown object to be rethrown.

#include <iostream>
using namespace std;

void handler(){
    try{
        throw 0;
    }catch(int){
        cout << "caught from handler function" << endl;
        throw; //rethrowing
    }
}

int main(){

    try{
        handler();
    }catch(int){
        cout << "caught from main function" << endl;
    }

    return 0;
}