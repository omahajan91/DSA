#include<iostream>
using namespace std;

int main(){

    // int x = 10;
    // int &y = x;

    // cout << "x : " << x << " and y : " << y << endl;
    // x = x + 5;
    // y = y + 1;
    // cout << "x : " << x << " and y : " << y << endl;

// This is a reference variable and it shows address of n ( so if we change value of n, it will change exact value of (if it is taken from function outside int main() ) n )
  
    /*
    int n = 10;
    cout << "n : " << n << endl;
    cout << "&n : " << &n << endl;
    */

    int a = 10;
    int &b = a;
    // int *c = &a; 
    // cout << c <<" "<< &c <<" "<<&*c<< endl;
    cout << "a : " << a << " and b : " << b <<endl<< " and &b : " << &b <<endl<< " and &a : " << &a << endl;

    return 0;
}