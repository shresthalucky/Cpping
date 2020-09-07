#include <iostream>
using namespace std;

float taxAmt(long income, int flag=0){
	
	if(flag == 0){
		if(income > 85000){
			return(0.15*(income - 85000));
		}
		return 0;
	}
	
	else{
		if(income > 100000){
			return(0.15*(income - 100000));
		}
		return 0;
	}
	return 0;
}

int main(){
	long income;
	unsigned int married;

	cout << "Enter inncome amount : ";
	cin >> income;
	cout << "0. Unmarried" << endl << "2. Married" << endl << ":";
	cin >> married;

	if(taxAmt(income, married) == 0){
		cout << "No tax amount to be paid!" << endl;
	}
	else{
		cout << "Tax amount to be paid : NRs. " << taxAmt(income, married) << endl;
	}

	return 0;
}