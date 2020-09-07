#include <iostream>
#define PI 3.1415
using namespace std;

float area(float l, float b){
	return (l*b);
}

float area(float r){
	return (PI*r*r);
}

int main(){
	float length, breadth, radius;
	cout << "Enter length and breadth of rectangle : ";
	cin >> length >> breadth;
	cout << "Enter radius of circle : ";
	cin >> radius;
	cout << "Area of rectangle is : " << area(length, breadth) << endl;
	cout << "Area of circle is : " << area(radius) << endl;
}