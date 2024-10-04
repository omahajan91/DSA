#include <iostream>
using namespace std ;

int main (){

//  int n = 234 ;
//  int y ;
//  y =  (n%100) ;

//  cout << (n%10) << endl;
// cout << (y%10) << endl ;
//  cout << (n%100) << endl ;


int count = 0 ;
int n ;
cin>> n ;

while(n!=0){

   if (n&1){
    count ++ ;
   }
 n= n >> 1 ;
}
 cout << count << endl ;
    return 0 ;
}