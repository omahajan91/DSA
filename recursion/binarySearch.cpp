#include<iostream>
using namespace std;

bool find(int arr[], int size , int key , int end , int start = 0){
   
   // Base case
    if ( start > end){
       return 0;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == key){
         return 1;
    }
    if (arr[mid] < key){
      return find(arr, size, key, mid+1 , end);
    }
    else if (arr[mid] > key){
        return find(arr, size, key, start  , mid-1);
    }

}


int main (){

    int arr1[10] = {2,4,8,16,32,64,65,110,111,150};
    int size = 111;
    int key = 5;

// in find function we have to pass (arr_name , size . the key we want to find , end index of array )
    int value = find(arr1, size, key, size-1);

    if (value ){
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0 ;
}