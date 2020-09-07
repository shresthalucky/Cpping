#include <iostream>
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
		Complex(int r = 0, int i = 0){
			this->real = r;
			this->imag = i;
		}

		~Complex(){
			cout << "Deconstructor called" << endl;
		}

		void display(){
			cout << this->real << "+" << this->imag << "i" << endl;
		}
};

int main(){
	Complex c1(1, 2), *c;
	c = &c1;
	c.display();
	return 0;
}