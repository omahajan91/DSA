#include<iostream>
using namespace std;

void mergeit(int arr[], int s , int e){
    
   int mid = s + (e - s)/2;

   int len1 = mid - s + 1;
   int len2 = e - mid;

   int *first = new int[len1];
   int *second = new int[len2];

   int mainArrayIndex = s;
   for (int i = 0; i < len1; i++){
     first[i] = arr[mainArrayIndex++];
   }

   mainArrayIndex = mid + 1 ;
   for (int i = 0; i< len2; i++){
      second[i]= arr[mainArrayIndex++];
   }
   
   int index1 = 0 ;
   int index2 = 0 ;
   mainArrayIndex = s;

  while (index1 < len1 && index2 < len2){
    if (first[index1] < second[index2]){
        arr[mainArrayIndex++] = first[index1++];
    }
    else{
        arr[mainArrayIndex++] = second[index2++];
    }
  }

  while(index1 < len1){
     arr[mainArrayIndex++] = first[index1++];
  }

  while(index2 < len2){
     arr[mainArrayIndex++] = second[index2++];
  }

}

void mergeSort(int arr[], int s , int e){
    
    // base case
    if (s>=e){
        return;
    }

    int mid = s + (e - s)/2;
    
    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    mergeit(arr, s, e);

}

int main(){

    int arr1[10] = {4,10,2,11,1,6,15,8,7,20};
    int arr2[20] = {4,10,91,11,1,45,15,17,12,20, 0,77,17,18,99, 14, 16, 17, 18, 19};
    int n = 20;
    int n1 = 10;

    mergeSort(arr2, 0, n-1 );

    for (int i =0 ; i<n; i++){
        cout << arr2[i] << " "; 
    }
     
    return 0;
}