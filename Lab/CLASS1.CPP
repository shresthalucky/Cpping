#include <iostream.h>
#include <conio.h>

class Box{
	int length, breath, height;
	public:
		Box(int l, int b, int h){
			length = l;
			breath = b;
			height = h;
		}
		int get_vol();

};

int Box::get_vol(){
	return(length * breath * height);
}

void main(){
	Box b1(1 ,2, 3), b2(3, 4, 5);
	clrscr();
	cout << "Volume of b1 = " << b1.get_vol() << endl;
	cout << "Volume of b2 = " << b2.get_vol() << endl;
	getch();
}