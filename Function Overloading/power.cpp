#include <iostream>
using namespace std;

int power(int b, int p){
	int ans=b;
	for(int i=1; i<p; i++){
		ans*=b;
	}	
	return ans;
}

float power(float b, int p){
	float ans=b;
	for(int i=1; i<p; i++){
		ans*=b;
	}	
	return ans;
}

int main(){
	cout << power(2, 2) << endl;
	cout << power(2.2f, 2) << endl;
	return 0;
}