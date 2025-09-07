// code is not fully correct it has some errors !!
// time out error is coming !! 

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    
   int firstElement = arr[s];
   int count = 0;

   for (int i = s+1 ; i<= e ; i++){
       if (firstElement > arr[i]){
         count++;
       }
   }

   int firstElementIndex = s+count;
   swap(arr[s], arr[firstElementIndex]);

   int i = s;
   int j = e;

while( i< firstElementIndex && j > firstElementIndex ){
   while ( arr[i] < firstElement ){
       i++;
   }
   while (arr[j] > firstElement ){
       j--;
   }
}

if ( i< firstElementIndex && j > firstElementIndex ){   
   swap(arr[i], arr[j]);
   i++;
   j--;
}  

return firstElementIndex;

}

void quickSort(int arr[],int s, int e){
   // base-case
   if (s>=e){
     return ;
   }

   int p = partition (arr, s, e);

   quickSort(arr, s, p-1);

   quickSort(arr, p+1, e);

}

int main(){

    int arr[15] = {4,10,2,11,1,6,15,8,7,20,12,0,71,17,22};
    int n = 15;

    quickSort(arr, 0, n-1);

    for (int i = 0; i<n; i++){
        cout << arr[i] <<" ";
    } cout << endl;

    return 0;
}