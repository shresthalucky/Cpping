#include <iostream>
#include <cstring>
using namespace std;

struct Student{
	private:
		int age, roll;
		char name[20];
	public:
		void input(){
			strcpy(name, "Prashun");
			roll = 30;
			age = 19;
		}

		void display(){
			cout << "Name = " << name << " age = " << age << " roll = " << roll << endl;
		}
}a;

int main(){
	a.input();
	a.display();
	string test;
	return 0;
}
