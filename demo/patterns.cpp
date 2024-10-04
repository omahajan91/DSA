#include <iostream>
using namespace std ;

int main (){

int n ;
cout << "write the value of n : " ;
cin >> n ;

int i = 1 ;
while ( i <= n){
  

  int j = 1 ;
  int k = i ;
  while ( j <= i){
     cout << k ;
     j = j + 1;
     k = k - 1 ;
     
  }
  i = i + 1 ;

  cout << "" << endl ;
}
// cout << "" << endl ; 

    return 0 ;
}
