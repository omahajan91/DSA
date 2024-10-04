#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c ;

    cout << "a="  ;
    cin >> a ;
    cout << "\nb=";
    cin >> b ;

    c= a ;
    b= c ;
    
    cout << "a :" << b << endl ;
    a= b;
    cout << "b :" << a << endl ;


    return 0 ;
}