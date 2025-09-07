#include<iostream> 
using namespace std;

int main(){

    int x = 2;
    int* y = &x ;

    cout << y << endl ;   // gives address of x 

    cout << &y << endl ;   // gives address of y 
    cout << *y << endl ;   // gives the value of a variable for which the address is stored 

     // int * k = &y ; // gives warning because y is of type int* and k is of type int**

    //    cout<< "This is output" << endl;

    return 0 ;
}