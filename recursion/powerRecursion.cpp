#include<iostream>
using namespace std;

bool even(int n){
   if (n % 2 == 0){
       return true;
   }
    return false;
}

int value (int baseNumber , int powerNumber){

    // base case
    if (powerNumber == 0){
        return 1;
    }

    else if (even(powerNumber)){
        int result = value(baseNumber, powerNumber/2);
       return result * result ;
    }
    else {
        int result = value(baseNumber, powerNumber/2);
        return baseNumber * result * result;
    }
}


int main (){

   int baseNumber = 2;
   int powerNumber = 10;

   int finalResult = value(baseNumber , powerNumber);

    cout <<"The value of "<<baseNumber<<" to the power "<<powerNumber<<" is : "<< finalResult << endl;

    return 0 ;
}