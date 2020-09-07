#include <iostream>
#include <iomanip>
// #define PI 3.1415
using namespace std;

const int n = 3;

class matrix{
    int m[n][n];
    public:
    matrix(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                m[i][j] = 0;
            }
        }
    }
    void data(){
        for(int i=0; i<n; i++){
            cin >> m[i][0];
            cin >> m[i][1];
            cin >> m[i][2];
        }
    }

    matrix operator *(matrix &a){
        matrix t;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    t.m[i][j] += m[i][k]*a.m[k][j];
                }
            }
        }
        return t;
    }

    void display(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << setw(10) << left << m[i][j];
            }
            cout << endl;
        }
    }

};

int main(){

    matrix m1;
    m1.data();
    matrix m2;
    m2.data();
    matrix m3;
    m1.display();
    m2.display();
    m3 = m1*m2;
    m3.display();

    return 0;
}