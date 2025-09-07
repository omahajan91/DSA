#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;
    int sum = 0 ;
    int cry = 10 ;

    // cout << num << endl;
    // cout << sum << endl;
    // cout << cry << endl;

    // address of Operator - &

    // cout <<" address of num is " << &num << endl;
    // cout <<" address of sum is " << &sum << endl;
    // cout <<" address of cry is " << &cry << endl;

    // int *ptr = &num;
    // int k = *ptr;
    // cout << "address of num is " << &k << endl << ptr << endl;

    // int *p = 0 ;   // here we can you Null value (0) but can't give any random value(integers)

    // cout << &p << endl;
    // cout << *p << endl;

    // int i = 5 ;

    // int *p = 0 ;
    // p = &i ;   

   // cout << &p << endl;
   // cout << *p << endl;

   //important concept
   int i = 3;
   int *t = &i;
   //cout << (*t)++ << endl;
   *t = *t +1;
   cout << *t << endl;
   cout << " before t "<< t << endl;
   t = t + 1;
   cout << "after t "<< t << endl;
   cout << "original value *t " << *t << endl;

   return 0 ;
}