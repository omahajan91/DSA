#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        mini = min( mini, num[i]);
    }
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {
        maxi = max(maxi, num[i]); 
    }
    return maxi;
}

int main() {

    int size = 5 ;
    // cin >> size;

    int num[5] = {2, 3, 5, 7, 9};

int sum = 0 ;

    for(int i = 0; i<size; i++) {
        // cin >> num[i];
        int temp_size = size - 1 ;
        num[i] = num[temp_size] ;
        temp_size = temp_size - 1 ;
         cout << num[i] << " " ;
         
        // sum = sum + num[i] ;
    }

    // cout << " Maximum value is " << getMax(num, size) << endl;
    // cout << " Sum of the all the elements are " << sum << endl;
cout << endl ;
for (int i = 0 ; i < size ; i++){
 cout << num[i] << " " ;
}
    


    // cout << " Minimum value is " << getMin(num, size) << endl;

    return 0;
}