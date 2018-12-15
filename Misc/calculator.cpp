#include <iostream>

using namespace std;

class CALCULATOR{
public:
	double calculate(float n1, float n2, char sym){
		switch(sym){
			case '+' : return n1+n2;
			case '-' : return n1-n2;
			case '*' : return n1*n2;
			case '/' : return n1/n2;
			default : cout << "Wrong Format" << endl; return 0;
		}
	}
}calculator;


int main(){
	float n1,n2;
	char sym;
	while(true){
		cout << "Enter expression : " << endl;
		cin >> n1 >> sym >> n2;
		cout << calculator.calculate(n1,n2,sym) << endl;
	}
	return 0;
}