#include <iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    char level;

    Hero() {}

    // Hero(const Hero &other) {
    //     health = other.health;
    //     level = other.level;
    //     cout << "Copy constructor called!" << endl;
    // }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void print() {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
};

int main() {
    // Static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    a.print();

    // Dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    b->print();

    // Copy constructor (shallow copy)
    Hero d = a;  // or Hero d(a);
    d.print();

    return 0;
}
