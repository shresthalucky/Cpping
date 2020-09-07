#include <iostream>
using namespace std;

class Time{
    int hh;
    int mm;
    int ss;

    public:
    void settime(int h, int m, int s){
        hh = h;
        mm = m;
        ss = s;
    }

    Time addtime(Time time){
        Time t;
        t.hh = hh - time.hh;
        t.mm = mm - time.mm;
        t.ss = ss - time.ss;
        return t;
    }

    void show(){
        cout << hh << ":" << mm << ":" << ss << endl;
    } 
};

int main(){
    Time t1, t2, t3;
    t1.settime(12, 12, 12);
    t2.settime(10, 10, 10);
    t3 = t1.addtime(t2);
    t3.show();
    return 0;
}