#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main(){

/*
  int n;
  cout << "Enter the number of elements in array: ";
  cin >> n;
  int *arr = new int[n]; // dynamic memory allocation

  // taking input in array
   for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Sum of elements in array is: " << ans << endl;
*/

int n[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
// int n= 10;
int *ptr = n;

cout << "Address of the array 'n' " << ptr <<" "<< ptr[0] <<ptr[1]<<n[0]<< endl;
  


    return 0;
}