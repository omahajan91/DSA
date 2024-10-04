#include<iostream>
using namespace std ;

int main (){

//    int i ;
   int n ;
   cout << "write the value of n: " << endl ;
   cin >> n ;
   int p = n ;
   int t = 0 ;
   int m = 1;
   int k ;

   while (p!=0){
    p = p / 10 ;
    m = m * 10;
   }
//    cout << n << endl ;
   m = m / 10 ;
//    cout << m << endl ;
//   
   while (n!=0)
   {
    k = n % 10 ;
    t = (m * k) + t ;
    m = m / 10 ;
    n = n / 10 ;
   }
   cout<< t << endl ;
   
 return 0 ;
}