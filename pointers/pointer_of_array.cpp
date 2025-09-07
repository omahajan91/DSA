#include <iostream>
using namespace std;

int main (){
   
    int arr[10] = {10, 20, 30, 40, 50};

    // when ever we print arr or &arr[0] it will give the address of the first element of the array, both are the same !!

/*
    cout << "Address of the array 'arr' " << arr << endl;
    cout << "value at the array 'arr[0]' " << arr[0] << endl;
    cout << "Address of the array 'arr[0]' " << &arr[0] << endl;
    cout << "value at the array 'arr[1]' " << arr[1] << endl;
    cout << "Address of the array 'arr[1]' " << &arr[1] << endl;
*/

    int *ptr = arr;
    int *p = &arr[1];
    
    
     cout << "1st : " << ptr <<" and "<< arr << endl;   // here "ptr" and "arr" and " &arr[0] " are same !!
     cout << "2nd : " << *ptr << " and " << *arr << endl;
     cout << "3rd : " << *p << " and " << *&arr[1] << endl;   // this is also same !!
     cout << "4th : " << &arr[0] << " Both r diff " << &arr[1] << endl;

// some more examples(new things)

cout << "4th " << *arr << endl;    // *arr is value of the first element
cout << "5th " << *arr + 1 << endl; // *arr + 1 is value of the first element + 1 (here 1 is added only)
cout << "6th " << *(arr + 1) << endl;  // *(arr + 1) is value of the second element
cout << "7th " << *(arr) + 1 << endl;  // *(arr) + 1 is value of the first element + 1 (here 1 is added only) (same as 5th (*arr + 1))

// some formula : " *(arr + i) = arr[i] " and " *(i + arr) = i[arr] "

    return 0;
}