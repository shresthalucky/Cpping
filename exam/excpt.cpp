#include <iostream>
using namespace std;

class D{
    public:
    int num;
    D(int a){
        num = a;
    }
};
class M{};
class Y{};

class Date{
    int year, month, day;
    public:
    void read(){
        try{
            cin >> year >> month >> day;
            if(year<0){
                throw D(year);
            }
        }catch(D e){
            cout << "from class function" << endl;
            throw;
        }
    };
};

int main(){

    Date d;
    try{
        d.read();
    }catch(D e){
        cout << e.num << " is neg" << endl;
    }

    return 0;
}