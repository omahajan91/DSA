#include<iostream>
using namespace std;

void sortArr(int arr[], int size){
   
   // base case
   if (size == 0 || size == 1){
      return ;
   }
   for (int i =0; i < size-1 ; i++){
       if (arr[i]> arr[i+1]){
        swap(arr[i], arr[i+1]);
       }
   }
   sortArr (arr, size-1);

}

int main (){

 int arr1[10] = {4,10,2,11,1,6,15,8,7,20};
 int size = 10;

    sortArr( arr1 , size);

    for (int i = 0; i < size; i++){
        cout << arr1[i] << " ";
    }

    return 0 ;
}