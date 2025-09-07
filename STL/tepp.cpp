#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string str = "hello";

    // Reverse the string
    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}
