#include <iostream>
#define PI 3.1415
using namespace std;

int area(int w){
	return (w*w);
}

float area(float l, float b){
	return (l*b);
}

float area(float r){
	return (PI*r*r);
}

int main(){
	cout << "Area of square : " << area(10) << endl;
	cout << "Area of rectangle : " << area(10, 10) << endl;
	cout << "Area of cicle : "<< area(1.0f) << endl;
}