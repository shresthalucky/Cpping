#include <iostream>
#include <string.h>
using namespace std;

class str{
    public:
    char a[10];
    str(char* c){
        strcpy(c, a);
    }
    str(){
        strcpy('\0', a);
    }
    str operator +(str&s){
        str con(strcpy(a, s.a));
        return con;
    }
};

int main(){

    str a("hello");
    str b("world");

    str c = a + b;
    cout << c.a;
    

    return 0;
}