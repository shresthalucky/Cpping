#include <iostream>
using namespace std;

class account{
    char name[20], address[20];
    long accno;
    double balance;

    public:
    void create(){
        cout << "Name";
        cin >> name;
        cout << "address";
        cin >> address;
        cin >> accno;
        cout << "balance";
        cin >> balance;
    }

    void deposit(double balance){
        this->balance += balance;
    }

    void withdraw(double balance){
        this->balance -= balance;
    }

    void show(){
        cout << "current balance " << balance << endl;
    }

};

int main(){

    account *ptr;
    account a1;
    ptr = &a1;
    ptr->create();
    ptr->show();
    ptr->deposit(2019.02);
    ptr->show();
    ptr->withdraw(2019.02);
    ptr->show();
    return 0;
}