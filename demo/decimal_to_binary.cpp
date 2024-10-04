#include <iostream>
#include <math.h>
using namespace std ;

int main (){

int n ;
cout << "write the value of n: " ;
cin >> n ;
cout << endl ; 

int number = 0 ;
int i = 0 ;

while (n!=0){

int bit = n%2 ;

number = number + (bit * pow(10,i) ) ;

// place = place * 10 ;
n = n / 2 ;


}
  cout << number << endl ;
    return 0 ;
}