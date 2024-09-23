#include <iostream>
using namespace std ;

int main (){

int i = 1 ;
int n ;
cout << "Enter the value of n: "  ;
cin >> n ;

int play = 1 ;

while ( i <= n){

   int j = 1 ;
   int space = n - i ;

while ( space) 
  {
     cout << "  " ;
     space = space - 1 ;
  }


   while ( j <= i) 
  {  
     cout << j << " " ;
     j = j + 1 ; 
  }

  int l = i - 1  ;
  while ( l ){
     cout << l << " ";
     l = l - 1;
  }


  cout << endl ;
  i = i + 1 ; 
}
    return 0 ;
}