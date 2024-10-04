#include <iostream>
using namespace std ;

int main (){

 /*
int n,i ;
cout << "write the value of n : " << endl ;
cin >> n ;
i=1 ;
int sum = 0 ;

while (i<=n)
{
//    cout << i <<" you are ohk to go " << endl ;
   sum = sum + i ;
   i = i + 1 ;
//    cout << sum << endl ;
}
 cout << sum << endl ;


int n,i ;
cout << "write the value of n : " << endl ;
cin >> n ;
i=1 ;
int fact = 1 ;

while (i<=n)
{

   fact = fact * i ;
   i = i + 1 ;
//    cout << sum << endl ;
}
 cout << fact << endl ;
 */

int fahrenheit ;
double celsius ;

cout << "Enter the value of fahrenheit : " ;
cin >> fahrenheit ;

celsius = ((fahrenheit) - 32) * 5/9 ;

cout << "here is your celsius value : " << celsius <<endl ; 


    return 0 ;
}