#include <iostream>
#include <string.h>
using namespace std;

class Grocery{
    char item[10];
    int num;
    float price;

    public:

    Grocery(char* item, float price){
        strcpy(this->item, item);
        this->price = price;
    }

    void additems();
    void show();

};

void Grocery::additems(){
    cout << "item"
}

int main(){
    return 0;
}