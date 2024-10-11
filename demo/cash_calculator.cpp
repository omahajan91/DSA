#include <iostream>
using namespace std ;

int main (){

   int n, hundred ,fifty ,twenty,ones ;
   cout<< "how much change You want to give: " << endl ;
   cin >> n ;

   int num = 1 ;

   switch (num) {

     case 1 :
         hundred = n/ 100 ;
         n = n - (hundred*100) ;
        cout << "Hundured rupess notes are: " << hundred << endl;
        // cout << m << endl ;

    case 2 :
         fifty = n/ 50 ;
         n = n - (fifty*50) ;
        cout << "Fifty rupess notes are: " << fifty << endl;
        // cout << p << endl ;

    case 3 :
        twenty = n/ 20 ;
        n = n - (twenty*20) ;
        cout << "twenty rupess notes are: " << twenty << endl;

    default :
         ones = n/ 1 ;
         n = n - (ones*1) ;
        cout << "remaning one rupess coins are: " << ones << endl;

   }

    return 0;
}