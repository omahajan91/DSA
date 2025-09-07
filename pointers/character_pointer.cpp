#include<iostream>
using namespace std;

int main(){
    
    // int arr[10] = {10, 20, 30, 40, 50};
    // char ch[6] = "hello";

    // int *ptr = arr;
    // char *cptr = &ch[0];

    // cout << "1st : " << ptr << " and " << arr << endl;
    // cout << "2nd : " << cptr << " and " << ch << endl;
    // cout << "3rd : " << *cptr << " and " << cptr << " and " << &ch <<endl;
    // cout << "3rd : " << *&ch[0] << " and " << &ch[1] << " and " << &ch[2] << " and " << &ch <<endl;

  char temp = 'a';
  char temp2 = 'b';
  char *p2 = &temp2;
  char *p = &temp;

//    cout << "4th : " << p << " and " << p2 << endl;
   cout << "4th : " << *p << " and " << *p2 << " " <<  " " <<  temp << endl;
   cout << p2 << endl;
   cout << &temp2 << endl;

    return 0;
}