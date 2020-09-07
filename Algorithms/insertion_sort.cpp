#include <iostream>

void insertionSort(int arr[], int n){
	int i, j, key;
	for(i = 1; i < n-1; i++){
		key = arr[i];
		j = i-1;
		while(j >=0 && key < arr[j]){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int arr[] = {14, 33, 27, 10, 35, 19, 42, 44};
	int n = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, n);
	for(int i = 0; i < n-1; i++){
		i == (n-2) ? std::cout << arr[i] << std::endl : std::cout << arr[i] << ",";
	}
	return 0;
}