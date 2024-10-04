#include<iostream>
using namespace std ;

int main (){

int i = 1 ;
int n ;
cout << "Enter the value of n: "  ;
cin >> n ; 

while(i<= n){

int white_space = 1 ;  

  while (white_space < i){
    cout << "  " ;
    white_space = white_space + 1 ;
  }

  int j = 1 ;
   
   while (j <= (n - i + 1)){
  cout << "*" << " ";
  j = j+1 ;
   }
 cout << endl ;
 i = i + 1 ;
}
    return 0 ;
}