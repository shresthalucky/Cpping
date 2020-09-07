#include <iostream>
#include <string.h>
using namespace std;

class String{
    public:
    char *s;
    int size;
    void getstring(char *str){
        size = strlen(str);
        s = new char[size];
        strcpy(s, str);
    }
    void operator+(String &a){
        size = strlen(s)+strlen(a.s);
        cout << size;
        // s = new char[size];
        // strcat(s, a.s);
        // cout << "asd " << s;
    }
};

int main(){

    char *str1, *str2;
    strcpy(str1, "hello");
    strcpy(str2, "world");
    String s, t;
    s.getstring(str1);
    t.getstring(str2);

    // s+t;

    return 0;
}