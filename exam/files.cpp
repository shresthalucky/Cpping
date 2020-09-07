#include <iostream>
#include <iomanip>
#include <fstream>
#include <istream>
#include <ostream>
using namespace std;

const char* filename = "record.dat";

class patient{
    int pid;
    char name[20];
    char address[20];
    int age;
    public:
    void read_data();
    void get_data(int n);
    void write_data();
    void search_data();
    void edit_data();
    void show_all_data();
    void show_data();
};

void patient::read_data(){
    cout << "pid: "; cin >> pid;
    cout << "name: "; cin >> name;
    cout << "age: "; cin >> age;
    cout << "address: "; cin >> address;
}

void patient::get_data(int n){
    ofstream file(filename, ios::binary|ios::app);
    read_data();
    file.write((char*)this, sizeof(*this));
    file.close();
}

void patient::show_all_data(){
    ifstream file(filename, ios::binary);
    if(!file){
        cout << "fof";
        return;
    }
    // cout << '\n' << setw(10) << left << "pid" << setw(20) << left << "name" << setw(10) << left << "age" << setw(20) << left << "address" << "\n\n";
    cout.width(10); cout << left << "pid";
    cout.width(20); cout << left << "name";
    cout.width(5); cout << left << "age";
    cout.width(20); cout << left << "address" << endl;
    while(!file.eof()){
        if(file.read((char*)this, sizeof(*this))){
            show_data();
        }
    }
    // int count = file.tellg() / sizeof(*this);
    // for(int i=0; i<count; i++){

    // }
    file.close();
}

void patient::show_data(){
    cout << setw(10) << left << pid << setw(20) << left << name << setw(5) << left << age << setw(20) << left << address << endl;
}

void patient::search_data(){
    int a;
    cout << "pid: "; cin >> a;
    ifstream file(filename, ios::binary);
    if(!file){
        cout << "fof";
        return;
    }
    // cout << '\n' << setw(10) << left << "pid" << setw(20) << left << "name" << setw(10) << left << "age" << setw(20) << left << "address" << "\n\n";
    cout.width(10); cout << left << "pid";
    cout.width(20); cout << left << "name";
    cout.width(5); cout << left << "age";
    cout.width(20); cout << left << "address" << endl;
    while(!file.eof()){
        if(file.read((char*)this, sizeof(*this))){
            if(pid == a){
                show_data();
                cout << file.tellg() << endl;
            }
        }
    }
    // int count = file.tellg() / sizeof(*this);
    // for(int i=0; i<count; i++){

    // }
    file.close();
}

void patient::edit_data(){
    int sn;
    cin >> sn;
    fstream file(filename, ios::out|ios::in|ios::binary);
    // cout << file.tellp() << endl;
    file.seekp(sn-1*sizeof(*this));
    read_data();
    file.write((char*)this, sizeof(*this));
    // cout << file.tellp() << endl;
    file.close();
}

int main(){

    // cout << setw(10) << right << setfill('x') << "hello" << endl;

    // patient p;    
    // p.get_data(1);
    // p.show_all_data();
    // p.search_data();
    // p.edit_data();
    // cout << setprecision(2) << 1.46788;
    cout.width(10) << cout.precision(2);
    cout << 1.24555;
    // cout << cout.precision(2);
    return 0;
}