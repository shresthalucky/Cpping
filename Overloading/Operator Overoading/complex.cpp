#include <iostream>
#include <cmath>
using namespace std;

class Complex{
	protected:
		float real, imag;
	public:
		Complex(int a = 0, int b = 0){
			real = a;
			imag = b;
		}
		
		Complex operator +(Complex a){
			Complex b;
			b.real = this->real + a.real;
			b.imag = this->imag + a.imag;
			return b;
		}

		float magnitude(){
			float mag;
			mag = pow((real*real + imag*imag), 0.5);
			return mag;
		}

		float angle(){
			float rad, deg;
			rad = atan(imag/real);
			deg = rad * (180/3.141592);
			return deg;
		}

		friend ostream& operator<<(ostream &out, const Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c){
	out << c.real << '+' << c.imag << 'i';
	return out;
}

int main(){
	Complex a(1, 2), b(2, 2), c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	c = a+b;
	cout << "c = " << c << endl;
	cout << "Magnitude of c = " << c.magnitude() << endl;
	cout << "Angle of c = " << c.angle() << endl;
	return 0;
}
