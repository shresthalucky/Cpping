#include <iostream.h>
#include <conio.h>

class Number{
	int a, b;
	public:
		Number(int x, int y=0){
			a = x;
			b = y;
		}
		int add();
		int sub();
		int mul();
		float div();
};

inline int Number::add(){
	return(a+b);
}

inline int Number::sub(){
	return(a-b);
}

inline int Number::mul(){
	return(a*b);
}

inline float Number::div(){
	return(a/b);
}

void main(){
	int a,b;
	clrscr();
	cout << "Enter two numbers : ";
	cin >> a >> b;
	Number n1(a,b);
	cout << "Addition : " << n1.add() << endl;
	cout << "Subraction : " << n1.sub() << endl;
	cout << "Multiplication : " << n1.mul() << endl;
	cout << "Division : " << n1.div() << endl;
	getch();
}