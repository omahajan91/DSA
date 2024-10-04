#include<iostream>
using namespace std ;

int main (){

 int n ;
 cout << "Your number value : " ;
 cin >> n ;

 bool take = 1 ;

 for ( int i = 2 ; i<n ; i++ ) {

    if ( n%i == 0  ) {
         take = 0 ;
         cout << i << endl ;
        //  break;
    }
 }
 if (take == 0){
   cout << "It is not a Prime Number" << endl;
 }
 else {
    cout << "It is a Prime Number" << endl ;
 }
    return 0 ;
}