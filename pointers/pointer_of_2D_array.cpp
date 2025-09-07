#include<iostream>
using namespace std;

int main(){

  int row, col;
  cout << "Enter the number of rows: "<< endl;
  cin >> row ;
  cout << "Enter the number of columns: "<< endl;
  cin >> col;

   int **arr = new int*[row]; // dynamic memory allocation


    // creating 2D array
   for(int i = 0; i < row; i++){
       arr[i] = new int[col];
    };

    // taking input in array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    // printing the array
    cout << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   // releasing the memory

    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}