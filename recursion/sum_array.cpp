#include <iostream>
using namespace std;


int sumIt(int arr[], int n, int i = 0) {
    if (i == n) { 
        return 0;
    }
    return arr[i] + sumIt(arr, n, i + 1); 
}

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    int result = sumIt(arr1, size); 
    cout << "Result: " << result << endl; 
    return 0;
}
