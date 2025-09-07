#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void reverseWord(vector<char>& s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

void reverseWords(vector<char>& s) {
    int n = s.size();
    // if (n == 0) return;

    reverseWord(s , 0, n - 1);

    int start = 0; 
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            reverseWord(s, start, i - 1);   
            start = i + 1; 
        }
    }
}

int main() {
    // Example 1
    vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'I', 's', ' ', 'b', 'l', 'u', 'e'};
    reverseWords(s);

    for (char c : s) {
        cout << c;
    }
    cout << endl;

    // Example 2
    vector<char> s2 = {'a'};
    reverseWords(s2);

    for (char c : s2) {
        cout << c;
    }
    cout << endl;

    return 0;
}
