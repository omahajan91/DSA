#include <iostream>
using namespace std ;

int main (){

int n ;
cout << "write the value of n: " ;
cin >> n ;
cout << endl ; 

int number = 0 ;
int place = 1 ;

while (n!=0){

int bit = n%2 ;

number = number + (bit * place ) ;

place = place * 10 ;
n = n / 2 ;


}
  cout << number << endl ;
    return 0 ;
}