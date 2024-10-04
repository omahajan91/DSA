#include <iostream>
using namespace std ;

int main (){

// question 1 
/*
  for (int i = 0; i < 5; i++)
  {
    cout << i << endl ;
    i++ ;
  }
 */


// 2nd question (intersting question)

/*
for (int i = 0 ; i<= 15 ; i=i+2)
{
    cout << i<< endl ;

    if (i&1) {
        continue;
    }
    i++ ;
    cout<< i << endl ;   
}
*/

// int i = 0;
// int j ;
// i = j ;
// i++ ;

for (int i = 0; i < 5; i++)
  {
    
    for (int j = i; j<= 5; j++)
  {
    cout << i << " " << j << endl;
  }
  }

// cout << j << endl ;





    return 0 ;
}