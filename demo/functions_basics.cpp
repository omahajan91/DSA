#include <iostream>
using namespace std ;

void counting_fn(int number){
    for(int i = 1 ; i <= number ; i ++){
           cout << i << " " ;
    }
}

int main (){

int num ;
  
  cin >> num ;

  counting_fn(num) ;


    return 0 ;
}