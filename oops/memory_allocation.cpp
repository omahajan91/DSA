# include <iostream>
using namespace std;

class school {
    public:
     int roll_no ;

     school(){
        cout << "constructor called" << endl;
     }
};

int main(){

   school pig ;
   school *ai = new school();

    return 0;
}