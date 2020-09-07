#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string s;
    fstream f;
    f.open("data.csv", ios::in);

    while(getline(f, s, ',')){
        cout << s << endl;
    }

    return 0;
}