#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int digits, to_sum;
	cout << "Enter number of digits and number to sum : ";
	cin >> digits >> to_sum;
	cout << digits << " " << to_sum << endl;

	for(int i = pow(10, (digits - 1)); i < pow(10, digits); i++){
		cout << i << endl;
	}
	return 0;
}