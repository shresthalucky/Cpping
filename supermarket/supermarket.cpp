#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>
#include <fstream>
#include <ostream>
using namespace std;

const char* filename = "record.dat";

class supermarket{
    string item;
    int num;
    float price;

    public:

    // supermarket(char* item, float price){
    //     strcpy(this->item, item);
    //     this->price = price;
    // }

    void additems(string itemname, float price);
    void show();
    void insert();

};

void supermarket::additems(string itemname, float price){
    ofstream file(filename, ios::binary|ios::app);
    file.write((char*)this, sizeof(this));
    file.close();
}

void supermarket::insert(){
    fstream f;
    f.open("data.csv", ios::in);
    string line;
    vector<string> row;
    string temp;
    int n;
    cout << "Item number: ";
    cin >> n;

    while(getline(f, line)){
        row.clear();
        cout << line << endl;
        stringstream s(line);
        while(getline(s, temp, ',')){
            row.push_back(temp);
        }
        if(stoi(row[0]) == n){
            additems(row[1], stof(row[2]));
            cout << row[1] + " added" << endl;
            break;
        }
    }
    f.close();

}

int main(){
    supermarket s;
    s.insert();
    return 0;
}