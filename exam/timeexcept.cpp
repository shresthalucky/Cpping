#include <iostream>
using namespace std;

class H{
    public:
    int e;
    H(int a){
        e = a;
    }
};

class M{
    public:
    int e;
    M(int a){
        e = a;
    }
};


class S{
    public:
    int e;
    S(int a){
        e = a;
    }
};


class TIME{
    public:
    int hour, min, sec;
    void read(){
        cin >> hour >> min >> sec;
    }
};

int main(){
    TIME t;
    try{
        t.read();
        if(t.hour > 24){
            throw H(t.hour);
        }
        if(t.min > 60){
            throw M(t.min);
        }
        if(t.sec > 60){
            throw S(t.sec);
        }
    }catch(H e){
        cout << e.e;
    }catch(M e){
        cout << e.e;
    }catch(S e){
        cout << e.e;
    }

    return 0;
}