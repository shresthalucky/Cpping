//for different objects of same class, data members of each object are stored in seperate memory location but for static members, for all objects are stored in same memory location
//static belongs to class rather than object
//A static member function can only access static data member, other static member functions and any other functions from outside the class.

#include <iostream>
using namespace std;

class square{
    int lenght;
    static int count;
    public:

    square(int l){
        lenght = l;
        count++;
    }

    static int counter(){
        return count;
    }
};

int square::count = 0;

int main(){

    square s1(4);
    square s2(5);
    square s3(6);

    // cout << square::count << endl;
    cout << square::counter() << endl;
    
    return 0;
}