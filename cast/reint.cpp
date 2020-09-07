#include <iostream>
using namespace std;

class Time{
    int hr, min, sec;
    public:
    Time(){
        hr = 0; min = 0; sec = 0;
    }
    Time(int h, int m, int s){
        hr = h;
        min = m;
        sec = s;
    }
    void disp(){
        cout << hr << endl;
        cout << min << endl;
        cout << sec << endl;
    }
    Time operator+(Time& t){
        Time n;
        n.sec = this->sec + t.sec;
        n.min = n.sec/60;
        n.sec = n.sec%60;
        n.min = n.min + this->min + t.min;
        n.hr = n.min/60;
        n.min = n.min%60;
        n.hr = n.hr + this->hr + t.hr;
        return n;
    }
    void sum(Time t1, Time t2){
        sec = t1.sec + t2.sec;
        min = sec/60;
        sec = sec%60;
        min = min + t1.min + t2.min;
        hr = min/60;
        min = min%60;
        hr = hr + t1.hr + t2.hr;
    }

};

int main(){
    int* a;
    float* b;
    *a = 12;
    cout << b << endl;
    cout << *a << endl;
    b = reinterpret_cast<float*>(a);
    cout << *a;
    // cout << c;

    // Time t1(10, 50, 30);
    // Time t2(5, 10, 60);

    // Time t3 = t1 + t2;
    
    // t3.disp();

    return 0;
}