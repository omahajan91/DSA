// #include<iostream>
// using namespace std;

// class city{
//     string name;
//     int population;
//     string country;
// };

// int main(){

// city city1;
// cout << sizeof(city1) <<endl;

// }

// new 

#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

class city {
public:
    char name;
    int population;
    char country;
};

int main() {
    cout << "Size of city: " << sizeof(city) << " bytes\n";
    cout << "Offset of name: " << offsetof(city, name) << " bytes\n";
    cout << "Offset of population: " << offsetof(city, population) << " bytes\n";
    cout << "Offset of country: " << offsetof(city, country) << " bytes\n";
    return 0;
}
