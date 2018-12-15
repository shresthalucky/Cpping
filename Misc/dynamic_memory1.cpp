#include <iostream>
using namespace std;

class Number{
private:
	int a, b;
public:
	Number(int x, int y){
		a = x;
		b = y;
	}

	int add(){
		return(a+b);
	}
};

int main(){
	Number *p;
	int x, y;
	cout << "Enter Two Numbers : ";
	cin >> x >> y;
	p = new Number(x, y);
	cout << p->add() << endl;
	delete p;
	return 0;
}