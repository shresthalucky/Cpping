#include  <iostream> 
using namespace std; 
  
int shellSort(int arr[], int n) { 
    for (int gap = n/2; gap > 0; gap /= 2) { 

        for (int i = gap; i < n; i += 1) { 
            int temp = arr[i]; 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            
            arr[j] = temp; 
        } 
    } 
    return 0; 
}
  
int main() { 
    int arr[] = {14, 33, 27, 10, 35, 19, 42, 44}, i; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Array before sorting: \n"; 
    for(int i = 0; i < n-1; i++){
        i == (n-2) ? std::cout << arr[i] << std::endl : std::cout << arr[i] << ",";
    }  
    shellSort(arr, n); 
  
    cout << "\nArray after sorting: \n"; 
    for(int i = 0; i < n-1; i++){
        i == (n-2) ? std::cout << arr[i] << std::endl : std::cout << arr[i] << ",";
    }  
    return 0; 
}