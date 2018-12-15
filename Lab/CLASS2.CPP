#include <iostream.h>
#include <conio.h>

class Number{
	int a, b;
	public:
		Number(int x, int y=0){
			a = x;
			b = y;
		}
		int cube();
		int multiply();
};

inline int Number::multiply(){
	return(a*b);
}

inline int Number::cube(){
	return(a * a * a);
}

void main(){
	Number n1(2,3), n2(4);
	clrscr();
	cout << "Multiplyty : " << n1.multiply() << endl;
	cout << "Cube : " << n2.cube() << endl;
	getch();
}