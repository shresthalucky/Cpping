#include <iostream>
using namespace std;

template <class d>
class matrix{
    d m[3][3];
    public:
    matrix(){
        for(int i=0; i<3; i++){
                cout << "elements of row " << i+1 << ": ";
                cin >> m[i][0] >> m[i][1] >> m[i][2];
        }
    }
    void display(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << m[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main(){
    // matrix<int>m1;
    // m1.display();
    // matrix<float>m2;
    // m2.display();
    matrix<char>m3;
    m3.display();

    return 0;
}