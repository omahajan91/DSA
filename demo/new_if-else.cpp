#include<iostream>
using namespace std ;

int main (){
    
    char ch ;
    cout << "enter value of ch that is character : " ;
    cin >> ch ;

    if (ch >= 97 && ch <=122){
      cout << "your alphabet is lower case"<< endl ;
    }
    else if (ch >= 65 && ch <=90) {
        cout << "your alphabet is Upper case";
    }
    else if (ch >= 48 && ch <=57) {
        cout << "your alphabet is Number";
    }
    else {
        cout << "It is nor a number not alphabet"  ;
    }


    return 0 ;
}