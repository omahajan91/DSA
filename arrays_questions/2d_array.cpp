#include <iostream>
using namespace std;

int main()
{
   

/*
 int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
   };
*/

    int array[3][4];


// take input from user for 3x4 2D array
// output will be row wise

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cin >> array[i][j];
        }
    }

// for output column wise

 for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cin >> array[j][i];
        }
    }

// this will print the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}