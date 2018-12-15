#include <iostream>
using namespace std;

int fib(int n){
	int arr[n];
	arr[1] = 1;
	arr[2] = 1;
	for(int i = 3; i <= n; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[n];
}

int main(){
	cout << fib(20) << endl;
	return 0;
}