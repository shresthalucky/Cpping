#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

const char* filename = "record.dat";

class student{
    char name[20];
    int roll;
    public:
    void get_data();
    void add_data();
    void read_data();
    void search_data();
};

void student::get_data(){
    cout << "name "; cin >> name;
    cout << "roll "; cin >> roll;
}

void student::add_data(){
    fstream f(filename, ios::binary|ios::app|ios::out);
    for(int i=0; i<10; i++){
        get_data();
        f.write((char*)this, sizeof(*this));
    }
    f.close();
}

void student::read_data(){
    fstream f(filename, ios::binary|ios::in);
    if(!f){
        cout << "fnf";
        return;
    }
    while(!f.eof()){
        if(f.read((char*)this, sizeof(*this))){
            cout << roll;
            cout << name;
        }
        cout << endl;
    }
    f.close();
}

void student::search_data(){
    int r;
    cout << "roll no to edit: ";
    cin >> r;
    // fstream f(filename, ios::binary|ios::in|ios::ate|ios::out);
    fstream f(filename, ios::binary|ios::in|ios::out);
    student s;
    // int totalsize = f.tellg();
    // int totaldata = totalsize/sizeof(s);
    f.seekg(0);
    while(!f.eof()){
        if(f.read((char*)this, sizeof(*this))){
            if(roll == r){
                f.seekg(-sizeof(s), ios::cur);
                get_data();
                f.write((char*)this, sizeof(*this));
            }
        }
    }
    f.close();
}

int main(){

    student s;
    int a;
    cout << "press 1 to add 10 students' data" << endl;
    cout << "press 2 to show all data" << endl;
    cout << "press 3 to edit data" << endl;
    cin >> a;
    switch(a){
        case 1:
            s.add_data();
        case 2:
            s.read_data();
        case 3:
            s.search_data();
        default:
            cout << "error" << endl;
    }

    return 0;
}