#include <iostream>
using namespace std ;

int pwr (int a , int b)
  {
 
     int ans = 1 ;

     for (int i = 1 ; i <= b ; i++){
         ans = ans * a ;
     }
    //  cout << ans ;
    //    return ans ;
}

int main (){

int kl = pwr (10,2);
cout<< kl << endl ;

    return 0 ;

}