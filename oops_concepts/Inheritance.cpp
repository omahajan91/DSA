#include<iostream>
using namespace std;

class Human{
    public:
       int height;
       int weight;
       int age;

    public:
       int getage(){
          return this->age;
       }
       void setweight(int w){
           this->weight = w;
       }       
};

class male : public Human{

    public:
       string color;

    void sleep(){
        cout<<"I am Sleeping"<<endl;
    }

};

class cricketer : public male{
    public:
         string contry;
};

int main(){

    male m1 ;

    cout<<m1.age<<endl;
    m1.setweight(70);
    cout<<m1.weight<<endl;
    cout<<m1.height<<endl;
    m1.sleep();

    cricketer c1;
    c1.color = "red";
    c1.contry = "India";
    cout<<c1.color<<endl;
    cout<<c1.contry<<endl;

    return 0;
}