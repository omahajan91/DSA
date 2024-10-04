#include <iostream>
using namespace std ;

int main (){

int n ;
cout << "write the value of n: " ;
cin >> n ;
cout << endl ;
int a = 0 ;
int b = 1 ;
cout << a << " " << b << " ";
 
 for (int i = 0; i < n ; i++)
 {
    int new_term = a + b ;
    cout << new_term << " " ;

    a = b ;
    b = new_term ;
 }
 
    return 0 ;
}