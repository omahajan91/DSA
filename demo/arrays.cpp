#include <iostream>
using namespace std ;

void array_this(int third[], int k){

   for ( int i = 0  ; i < k ; i++ ) {

      cout << " " << i << " " ;

   }
}

int main (){
 
//  int third[15]  ;
//  array_this(third , 15) ;

// cout<< endl ;
/*
 int pratik[10] ;
 array_this(pratik , 10) ;

cout << endl;

int number[15];
cout << "Value at 14 index " << number[14] << endl;

*/
int second[3] = {5, 7, 11};
cout << "Value at 2 index " << second[0] << endl;
cout << "Value at 2 index " << second[1] << endl;
cout << "Value at 2 index " << second[2] << endl; 
cout << "Value at 2 index " << second[5] << endl;
// if we don't assign any value in the array and create the array of that size then it gives '0' as a value for the remaning one !!
/*

int mango[15] = {2,7};
int apple[10] = {1,2,3};
// int mangoSize = sizeof(mango)/sizeof(int);
// cout<<" Size of Third is " << mangoSize <<endl;
cout << sizeof(apple) << " 1 " << sizeof(int) <<endl ;
cout << sizeof(mango) << " 2 " << sizeof(int) << endl ;
cout << sizeof(char) << sizeof(double) << sizeof(int) <<" "<< sizeof(long double);
*/


    return 0 ;
}