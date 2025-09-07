# include<iostream>
using namespace std;

bool find(int arr[] , int size , int key , int i = 0){
    if (size == i ){
        return false ;
    }
    if (arr[i] == key){
        return true;
    }
    else return find(arr, size, key, i+1);
}

int main (){

    int arr1[6] = {2,4,8,16,32,64};
    int size = 6;
    int key = 5;

   int result = find(arr1, size, key);
    if (result){
         cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    } 

    return 0 ;
}