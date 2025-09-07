#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> reversePartialVector(vector<int> vec) {
    reverse(vec.begin() + 3, vec.end()); 
    return vec; 
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    vec = reversePartialVector(vec);

}
