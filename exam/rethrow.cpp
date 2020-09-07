#include <iostream>
using namespace std;

class excp{};

void handle(){
    try{
        throw 0;
    }catch(int){
        cout << "from handle function" << endl;
        throw;
    }
}

int main(){

    try{
        handle();
    }catch(int){
        cout << "from main" << endl;
        // throw;
    }

    return 0;
}