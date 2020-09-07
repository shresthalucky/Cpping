#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
	int temp;
	for(int i = 0; i < n-1; i++){
		for(int j  = i+1; j < n-1; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {14, 33, 27, 10, 35, 19, 42, 44};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr, n);
	for(int i = 0; i < n-1; i++){
		i == (n-2) ? std::cout << arr[i] << std::endl : std::cout << arr[i] << ",";
	}
	return 0;
}